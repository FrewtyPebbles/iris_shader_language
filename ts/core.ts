import WasmModule, {EmscriptenModule} from "./wasm.js";
import {Module, VirtualModuleGroup} from "./interfaces.ts";

const module_promise = WasmModule().then(mod => {
    // 1. Polyfill the [Symbol.dispose] method for each class
    // This allows 'using' to work automatically
    const classes = [mod.VirtualModuleGroup, mod.Module];
    
    classes.forEach(cls => {
        if (cls && cls.prototype && !cls.prototype[Symbol.dispose]) {
            cls.prototype[Symbol.dispose] = function() {
                this.delete();
            };
        }
    });
    
    return mod;
});


export async function tokenize(source:string):Promise<string[]> {
    return (await module_promise).tokenize(source);
};

export async function compile(module_name:string, source:string):Promise<string> {
    return (await module_promise).compile(module_name, source);
};

export async function create_virtual_module_group(name:string): Promise<VirtualModuleGroup> {
    return new (await module_promise).VirtualModuleGroup(name);
}
