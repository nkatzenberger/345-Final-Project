class Face {
	public:
		Vertex V1, V2, V3;
		int RGB[3];
		Face(Vertex v1, Vertex v2, Vertex v3, int rgb[3]) {
			V1 = v1; V2 = v2; V3 = v3;
			RGB[0] = rgb[0]; RGB[1] = rgb[1]; RGB[2] = rgb[2];
		}
};