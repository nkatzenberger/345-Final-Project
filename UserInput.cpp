#include "ref.h"
#include <vector>
using namespace std;

class UserInput {
public:
int [] colordefine(string color);
int [] convertList(string input);
};
int [] convertList(string input){
    dobule xyz[3];
    int count =0;
    string number = ""; 
     for (int x = 0; x<input.size(); x++){
            if ((input[x] == ' ' || intput[x] == ",")&& number.size()>0){
                xyz[count] = stod(number);
                number = ""; count ++;
            }
            else{
                number = number + x;
            }
        }
        return(xyz);
}
int [] colordefine(string color){
    map<string, int[3]>colorMap{{"red", [255, 0 ,0]},
     {"orange", [255, 128, 0]},
     {"yellow", [255, 255, 0]},
     { "light green", [128, 255, 0]},
     {"green", [0, 255, 0]},
     {"green blue", [0, 255, 128]},
     {"cyan", [0, 255, 255]},
     {"light blue", [0, 128,255]},
     {"blue", [0, 0, 255]},
     {"purple", [127, 0, 255]},
     {"magenta", [255, 0, 255]},
     {"pink", [255, 0, 127]},
     {"gray", [128, 128, 128]},
     {"black", [0, 0, 0]},
     {"white", [255, 255, 255]}};
     if(colorMap.find(color)!=colorMap.end()){
        return(colorMap[color]);
     }
     else{
        return(convertList(color));
     }
}

int main() {
    string yn = "yes";
    list<Vertex> Vertices;
    list<Face> Faces;
    fcount = 1;
    while(yn != "stop"){
        string input;
        string color;
        cout<< "Enter Coordinates for the x, y, and z axis of vertex number " + Verticies.size()+1 + " of face number" + fcount + "in a comma or space separated list";
        cin >> input;
        double coordinates[] =  convertList(input);
        if(Verticies.size+1 > 3){
            cout<< "Enter color of face. Either in RGB format or by name: "
            cin >> color;
            Face F(Verticies[0], Verticies[1], Verticies[2])
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

            cout << "enter 3 values for the RGB values";
                int rgb[3];
                cin >> rgb[0];
                cin >> rgb[1];
                cin >> rgb[2];

                Face face(v1, v2, v3, rgb);
                faces.push_back(face);
        }
    }

    Model model(faces);
}
