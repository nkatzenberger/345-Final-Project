#pragma once
#include <iostream>
#include <string>
#include <list>
#include<vector>
#include "ref.h"
#include <map>
#include <sstream>
#include <windows.h>
#include "Renderer.cpp"
using namespace std;
class UserInput {
public:
//float *colordefine(string color);
//vector<float> convertList(string input);
//Model returnModel();
};
//TODO: Convert to float
vector<float> convertList(string input) {
    vector<float> result(3,0);
    stringstream ss(input);
    float num;
    int count = 0;
    if (input.size() ==0){
        result.push_back(0);
        result.push_back(0);
        result.push_back(0);
        return result;
    }
    while (ss >> num) {
         if (count < 3) {
            result[count] = num;
            count++;
        }
        if (ss.peek() == ',' || ss.peek() == ' ') {
            ss.ignore();
        }
    }
    return result;
}
float *colordefine(string color){
    map<string, vector<int>> colorMap = 
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
     {"white", {255, 255, 255}},
     {"brown", {150, 75, 0}}};
     if(colorMap.find(color)!=colorMap.end()){
       float arr [3];
        copy(colorMap[color].begin(),colorMap[color].end(),arr);
        float * pointer = arr;
        return(pointer);
     }
     else{
        vector<float> temp = convertList(color);
        float vtoA [3];
        for (int i = 0; i < sizeof(vtoA); i++) {
            vtoA[i] = temp[i];
        }
        float * p1 = vtoA;
        return(p1);
     }
}

 //Model returnModel(){
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
int main(){
    string yn = "yes";
    vector <Vertex> Vertices;
    list<Face> Faces;
  int fcount = 1;
  bool going = true;
    while(going){
        if(Vertices.size()+1 <= 3){
            string input;
            cout<< "Enter Coordinates for the x, y, and z axis of vertex number " << Vertices.size()+1 << " of face number " << fcount << " in a comma or space separated list: \n";
            getline(cin, input); //get whole line entered avoids space being counted as 2 inputs
            vector<float> coordinates = convertList(input);
            Vertex V(coordinates[0], coordinates[1], coordinates[2]); //adds coordinates to vertex
            Vertices.push_back(V); //adds vertex to list
        }
        else {
            string color;
            cout<< "\nEnter color of face. Either in RGB format or by name: \n";
            getline(cin, color); //some color names have a space in them 
            float * rgb = colordefine(color);
            Face F(Vertices[0], Vertices[1], Vertices[2], rgb); //puts vectors into face
            Faces.push_back(F); //Add face to list
            Vertices.clear(); // reset the array or vectors i.e. Vertices
            fcount++; //increase count of number of faces
            cout<< "\n Enter stop to stop entering values. Or press enter to coninue \n";
            getline(cin,  yn); 
                if (yn == "stop"){
                    going = false;
                }
        }
    }
        Model model(Faces);
       // return model;
       model.toString();
} 
    /* //emergency code
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

            cout << "enter 3 values for the RGB values";
                int rgb[3];
                cin >> rgb[0];
                cin >> rgb[1];
                cin >> rgb[2];

                Face face(v1, v2, v3, rgb);
                faces.push_back(face);
        }


*/


