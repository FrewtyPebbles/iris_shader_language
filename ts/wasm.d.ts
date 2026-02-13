
interface EmscriptenModule {
    tokenize:(input:string, tab_size?:number)=>string[]
}

declare function Module(moduleArg?: Record<string, unknown>): Promise<EmscriptenModule>;

export default Module