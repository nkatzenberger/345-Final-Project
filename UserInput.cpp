
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
    vector<Face> Faces;
    fcount = 1;
    while(yn != "stop"){
        string input;
        cout<< "Enter Coordinates for the x, y, and z axis of vertex number " + Verticies.size()+1 + " of face number" + fcount + "in a comma or space separated list";
        double  xyz [3]; 
        cin >> input;
        string number;
        int count =0;
        for (int x = 0; x<input.size(); x++){
            if (input[x] == ' ' || intput[x] == ","){
                xyz[count] = stod(number);
                number = ""; count ++;
            }
            else if (input.substr(x,2) = ", "){
                 xyz[count] = stod(number);
                number = ""; count +=2;
            }
            else{
                number = number + x;
            }
        }
        if(Verticies.size+1 > 3){
            Face F(Verticies[0], Verticies[1], Verticies[2])
            Verticies.clear();
            fcount++;
        }
        else{
         Vertex V(xyz[0], xyz[1], xyz[2]);
        Vertices.push_back(V);
        cout<< "Enter stop to stop entering values";
        cin >> yn;   
    }
    }
	//ask user, how many faces?
    cout << "How many faces?";
    int faces;
    cin >> faces;
	//const int number = 1;
	vector<Face> vectorFaces;
    int defaultColor[3] = {1,1,1}  
    for(int i =0; i<= faces-3; i++){
        Face f(Vertices[i], Vertices[i+1], Vertices[i+2], defaultColor);
        vectorFaces.push_back(f);
    }

	//change aspects of faces
	vectorFaces[0].V1.x = 1;
	vectorFaces[0].V1.y = 1;
	vectorFaces[0].V1.z = 1;

	vectorFaces[0].V2.x = 0;
	vectorFaces[0].V2.y = 2;
	vectorFaces[0].V2.z = -1;
	//leave V3 as 0,0,0

	faces[0].RGB[0] = 255; //makes red tri

	Model model1 = Model(faces);
 list<Faces> nan;

}