import Module from "./wasm.js";


const module_promise = Module();


export async function tokenize(src:string, tab_size:number = 4):Promise<string[]> {
    return (await module_promise).tokenize(src, tab_size);
};

