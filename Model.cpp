//#pragma once
#include <iostream>
#include "ref.h"
#include <list>
#include "Face.cpp"
#ifndef MODEL_H
#define MODEL_H
class Model {
public:

	list<Face> allFaces;

	Model(list<Face> inputFaces) {
			allFaces = inputFaces;
	}
	void toString() {
        cout << "There are " << allFaces.size() << " faces" << endl;
        int count = 1;
        for (const Face& face : allFaces) {
            cout << "Face " << count <<":" << endl;
            cout << "  Vertex 1: (" << face.V1.x << ", " << face.V1.y << ", " << face.V1.z << ")" << endl;
            cout << "  Vertex 2: (" << face.V2.x << ", " << face.V2.y << ", " << face.V2.z << ")" << endl;
            cout << "  Vertex 3: (" << face.V3.x << ", " << face.V3.y << ", " << face.V3.z << ")" << endl;
            cout << "Color: R:" << face.RGB[0] << ", G:" << face.RGB[1] << ", B:" << face.RGB[2] << endl;
            count++;
         }
    }
	/*void delete() {
		for (Face allFaces[]: dd){
		dd = null;
	}*/
};

#endif