
interface EmscriptenModule {
    tokenize:(input:string)=>string[]
    compile:(module_name:string, source:string)=>string
}

declare function Module(moduleArg?: Record<string, unknown>): Promise<EmscriptenModule>;

export default Module