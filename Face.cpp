//#pragma once
#include "ref.h"
#ifndef FACE_H
#define FACE_H
class Face {
public:
	Vertex V1, V2, V3;
	float RGB[3];
	Face(const Vertex& v1, const Vertex& v2, const Vertex& v3, float rgb[3])
		: V1(v1), V2(v2), V3(v3) {
		RGB[0] = rgb[0]; RGB[1] = rgb[1]; RGB[2] = rgb[2];
	}
};
#endif