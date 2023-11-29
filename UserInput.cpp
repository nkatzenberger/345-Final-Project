#include "ref.h"
class UserInput {
public:

};

int main() {
	//ask user, how many faces?
	const int number = 1;

	Face* faces = new Face[number];

	//change aspects of faces
	faces[0].V1.x = 1;
	faces[0].V1.y = 1;
	faces[0].V1.z = 1;

	faces[0].V2.x = 0;
	faces[0].V2.y = 2;
	faces[0].V2.z = -1;
	//leave V3 as 0,0,0

	faces[0].RGB[0] = 255; //makes red tri

	Model model1 = Model(faces);

}