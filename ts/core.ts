import Module from "./wasm.js";


const module_promise = Module();


export async function tokenize(source:string):Promise<string[]> {
    return (await module_promise).tokenize(source);
};

export async function compile(module_name:string, source:string):Promise<string> {
    return (await module_promise).compile(module_name, source);
};

