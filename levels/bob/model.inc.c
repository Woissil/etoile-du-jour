Vtx bob_dl_Plane_mesh_layer_1_vtx_cull[8] = {
	{{ {-2107, 0, 2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2107, 0, 2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2107, 0, -2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2107, 0, -2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2107, 0, 2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2107, 0, 2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2107, 0, -2107}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2107, 0, -2107}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx bob_dl_Plane_mesh_layer_1_vtx_0[4] = {
	{{ {-2107, 0, 2107}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {2107, 0, 2107}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {2107, 0, -2107}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-2107, 0, -2107}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx bob_dl_Plane_mesh_layer_1_tri_0[] = {
	gsSPVertex(bob_dl_Plane_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_bob_dl_f3dlite_material_002[] = {
	gsSPLightColor(LIGHT_1, 0xA2A2A2FF),
	gsSPLightColor(LIGHT_2, 0x4F4F4FFF),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsDPSetAlphaDither(G_AD_NOISE),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bob_dl_f3dlite_material_002[] = {
	gsDPPipeSync(),
	gsDPSetAlphaDither(G_AD_DISABLE),
	gsSPEndDisplayList(),
};

Gfx bob_dl_Plane_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(bob_dl_Plane_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_bob_dl_f3dlite_material_002),
	gsSPDisplayList(bob_dl_Plane_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_bob_dl_f3dlite_material_002),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

