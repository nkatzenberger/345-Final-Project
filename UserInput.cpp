
#include <iostream>
#include <string>
#include <vector>
#include "ref.h"
using namespace std;
class UserInput {
public:

};

int main() {
    string yn = "yes";
    vector<Vertex> Vertices;
    while(yn == "yes"){
        string input;
        cout<< "Enter Coordinates for the x axis of the Vertex";
        double x;
        cin >> input;
        x = stod(input);
        cout<< "Enter Coordinates for the y axis fo the Vertex";
        cin >> input;
        double y;
        y = stod(input);
        cout << "Enter coordinates for the z axis of the Vertex";
        cin >> input;
        double z;
        z = stod(input);
        cout<< "Enter stop to stop putting inputs in";
        cin >> yn;
        Vertex V(x, y, z);
        Vertices.push_back(V);
    }
	//ask user, how many faces?
    cout << "How many faces?";
    int faces;
    cin >> faces;
	//const int number = 1;
	vector<Face> vectorFaces;
    for(int i =0; i<= faces; i++){
        Face f(Vertices[i], Vertices[i+1], Vertices[i+2]);
        vectorFaces.push_back(f);
    }
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
 list<Faces> nan;

}