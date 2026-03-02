import { Module, VirtualModuleGroup } from "./interfaces.ts"

export interface EmscriptenModule {
    tokenize:(input:string)=>string[]
    compile:(module_name:string, source:string)=>string
    VirtualModuleGroup: {
        new(name: string, parent: VirtualModuleGroup|null = null, modules:Map<string, Module> = {}): VirtualModuleGroup;
    };
    Module: {
        new(name: string, parent: VirtualModuleGroup|null = null): VirtualModuleGroup;
    };
}

declare function WasmModule(moduleArg?: Record<string, unknown>): Promise<EmscriptenModule>;

export default WasmModule