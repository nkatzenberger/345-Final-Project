
#include <iostream>
#include <string>
#include <list>
#include<vector>
#include "ref.h"
#include <map>
using namespace std;
class UserInput {
public:
double *colordefine(string color);
double * convertList(string input);
};
double * convertList(string input){
    double xyz[3];
    int count =0;
    string number = ""; 
     for (int x = 0; x<input.size(); x++){
            if ((input[x] == ' ' || input[x] == ',')&& number.size()>0){
                xyz[count] = stod(number);
                number = ""; count ++;
            }
            else{
                number = number + input[x];
            }
        }
        double * pointer = xyz;
        return(pointer);
}
double * colordefine(string color){
    map<string, vector<double>> colorMap = 
    {   {"red", {255, 0 ,0}},
     {"orange", {255, 128, 0}},
     {"yellow", {255, 255, 0}},
     { "light green", {128, 255, 0}},
     {"green", {0, 255, 0}},
     {"green blue", {0, 255, 128}},
     {"cyan", {0, 255, 255}},
     {"light blue", {0, 128,255}},
     {"blue", {0, 0, 255}},
     {"purple", {127, 0, 255}},
     {"magenta", {255, 0, 255}},
     {"pink", {255, 0, 127}},
     {"gray", {128, 128, 128}},
     {"black", {0, 0, 0}},
     {"white", {255, 255, 255}}};
     if(colorMap.find(color)!=colorMap.end()){
       double arr [3];
        copy(colorMap[color].begin(),colorMap[color].end(),arr);
        double * pointer = arr;
        return(pointer);
     }
     else{
        return(convertList(color));
     }
}

int main() {
    string yn = "yes";
    list<Vertex> Vertices;
    list<Face> Faces;
  int fcount = 1;
    while(yn != "stop"){
        string input;
        string color;
        cout<< "Enter Coordinates for the x, y, and z axis of vertex number " , (Vertices.size()+1) , " of face number" , fcount , "in a comma or space separated list";
        cin >> input;
        double * coordinates = convertList(input);
        if(Vertices.size()+1 > 3){
            cout<< "Enter color of face. Either in RGB format or by name: ";
            cin >> color;
            Face F(Vertices[0], Vertices[1], Vertices[2]);
            Faces.push_back(F);
            Verticies.clear();
            fcount++;
        }
        else{
         Vertex V(coordinates[0], coordinates[1], coordinates[2]);
        Vertices.push_back(V);
        cout<< "Enter stop to stop entering values";
        cin >> yn;   
    }
    }
    /*
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

*/
}
