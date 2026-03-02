export interface Module {
    name:string;
    parent:VirtualModuleGroup;
    compile(): string;
}

export interface VirtualModuleGroup {
    name: string;
    
    add_module(module: Module): void;
    create_module(name: string, source_code:string): void;
    
    add_group(group: VirtualModuleGroup): void;
    create_group(name: string): void;
    
    remove_module(name:string): void;
    remove_group(name:string): void;

    get(path: string): VirtualModuleGroup | Module | undefined;
    delete(): void; // Required for memory management
}