import WasmModule, {EmscriptenModule} from "./wasm.js";
import {Module, VirtualModuleGroup} from "./interfaces.ts";

const module_promise:Promise<EmscriptenModule> = WasmModule();


export async function tokenize(source:string):Promise<string[]> {
    return (await module_promise).tokenize(source);
};

export async function compile(module_name:string, source:string):Promise<string> {
    return (await module_promise).compile(module_name, source);
};

export async function create_virtual_module_group(name:string): Promise<VirtualModuleGroup> {
    return new (await module_promise).VirtualModuleGroup(name);
}
