import { compile, tokenize, create_virtual_module_group, Module, VirtualModuleGroup } from "iris";

const iris_element = document.getElementById("iris");
const glsl_element = document.getElementById("glsl");

const test = `
from helper_file import utility as u

# Macros
def N_DIRECTIONAL_LIGHTS = 10
def N_POINT_LIGHTS = 10
def N_SPOT_LIGHTS = 10

uniform directional_lights_count:u16
uniform point_lights_count:u16
uniform spot_lights_count:u16

# Vertex Attributes
vertex[0] a_position:vec3
vertex[1] a_normal:vec3
vertex[2] a_uv:vec2

out v_normal:vec3
out v_uv:vec2
out v_frag_pos:vec4

uniform u_model:mat4
uniform u_view:mat4
uniform u_projection:mat4

func main() -> none {
    thing:vec3 = vec3(1.0) @ vec3(2.0)
    v_frag_pos = u_model * vec4(a_position, 1.0)
    v_normal = norm:mat3(trans:inv:u_model) * a_normal
    v_uv = a_uv
    while 1 as bool {
        u(1,1)
    }

    gl.Position = u_projection * u_view * v_frag_pos
}
`;

const helper_file = `
func helper(arg:f32) -> f32 {
    return 200.0 * arg - 300.00
}

func utility(a:i32, b:i32) -> i32 {
    return (
        if helper(a) > (2 as f32)
            then 70.0
            else 30.0
    ) / (b as f32) as i32
}
`;

async function main() {
    using pkg:VirtualModuleGroup = await create_virtual_module_group("package");
    try  {
        pkg.create_module('helper_file', helper_file);
        pkg.create_module('test', test);
        using module:Module = pkg.get("test") as Module;
        iris_element.innerHTML = test;
        console.log("JS COMPILING");
        glsl_element.innerHTML = (module.compile() as string)
            // .replace(/;/g, ";\n")
            // .replace(/{/g, " {\n")
            // .replace(/}/g, "}\n\n");
    } catch (error:any) {
        try {
            if (error instanceof Error) {
                console.log(JSON.parse(error.message));
            }
        } catch {}
        throw error;
    }
}
main()