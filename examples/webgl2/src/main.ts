import { tokenize } from "iris";

async function main() {
    const tokens = await tokenize(`
from folder.file import function_name
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

func main() -> none:
    v_frag_pos = u_model * vec4(a_position, 123.0022) # fake value
    v_normal = normalize(mat3(transpose(inverse(u_model))) * a_normal)
    function_name()
    v_uv = a_uv

    gl.position = u_projection * u_view * v_frag_pos
    `);

    for (var i = 0; i < tokens.length; ++i) {
        if (tokens[i] === "def")
            tokens[i] = "#define"
    }
    console.log(tokens.join(" "));
}
main()