void scroll_file_select_screen_file_select_screen_geo_mesh_layer_1_vtx_13() {
	int i = 0;
	int count = 12;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(file_select_screen_file_select_screen_geo_mesh_layer_1_vtx_13);

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

void scroll_menu_level_geo_file_select_screen() {
	scroll_file_select_screen_file_select_screen_geo_mesh_layer_1_vtx_13();
};
