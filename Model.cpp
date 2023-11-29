#include "ref.h"
class Model {
public:
	Face allFaces[];
	Model(Face inputFaces[]) {
		for (int i = 0; i < sizeof(inputFaces); i++) {
			allFaces[i] = inputFaces[i];
		}
	}
	void delete(){
		for (Face allFaces[]: dd){
		dd = null;
		}
	}
};