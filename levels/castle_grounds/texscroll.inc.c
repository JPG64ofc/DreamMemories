void scroll_castle_grounds_dl_mesh_mesh_layer_1_vtx_29() {
	int i = 0;
	int count = 12;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_mesh_mesh_layer_1_vtx_29);

	deltaX = (int)(1.4800000190734863 * 0x20 * random_float() * random_sign()) % width;
	deltaY = (int)(46.18000030517578 * 0x20 * random_float() * random_sign()) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_castle_grounds_dl_mesh_mesh_layer_1_vtx_31() {
	int i = 0;
	int count = 40;
	int width = 16 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_mesh_mesh_layer_1_vtx_31);

	deltaX = (int)(1.0 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_grounds_dl_mesh_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 13;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_mesh_mesh_layer_5_vtx_1);

	deltaX = (int)(0.05000000074505806 * 0x20) % width;
	deltaY = (int)(0.05000000074505806 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_castle_grounds_dl_mesh_005_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 60;
	int width = 16 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_mesh_005_mesh_layer_1_vtx_0);

	deltaX = (int)(1.0 * 0x20 * random_float() * random_sign()) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_grounds_dl_mesh_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 6;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_mesh_001_mesh_layer_5_vtx_0);

	deltaX = (int)(0.05000000074505806 * 0x20) % width;
	deltaY = (int)(0.05000000074505806 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_castle_grounds() {
	scroll_castle_grounds_dl_mesh_mesh_layer_1_vtx_29();
	scroll_castle_grounds_dl_mesh_mesh_layer_1_vtx_31();
	scroll_castle_grounds_dl_mesh_mesh_layer_5_vtx_1();
	scroll_castle_grounds_dl_mesh_005_mesh_layer_1_vtx_0();
	scroll_castle_grounds_dl_mesh_001_mesh_layer_5_vtx_0();
};
