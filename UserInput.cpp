#include "ref.h"
#include <vector>
using namespace std;

class UserInput {
public:

};

int main() {
    bool loop = true;
    string input = "";
    list<Face> faces;
    while (loop) {
        cout << "would you like to add a face? (y or n)";
        cin >> input;
        if (input == "n") {
            loop = false;
        }
        else {
            cout << "PLease enter coordinates for 3 vertices of the face";
                cout << "vertex 1";
                cout << "x position";
                double x;
                cin >> x;
                cout << "y position";
                double y;
                cin >> y;
                cout << "z position";
                double z;
                cin >> z;
                Vertex v1(x, y, z);

                cout << "vertex 2";
                cout << "x position";
                cin >> x;
                cout << "y position";
                cin >> y;
                cout << "z position";
                cin >> z;
                Vertex v2(x, y, z);

                cout << "vertex 3";
                cout << "x position";
                cin >> x;
                cout << "y position";
                cin >> y;
                cout << "z position";
                cin >> z;
                Vertex v3(x, y, z);

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