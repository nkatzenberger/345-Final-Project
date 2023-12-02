#include <iostream>
#include "ref.h"
using namespace std;

class Vertex {
public:
        double x;
        double y;
        double z;
        void setX();
        void setY();
        void setZ();
        double getX;
        double getY;
        double getZ;
    
    Vertex(double inputx, double inputy, double inputz){
        x = inputx;
        y = inputy;
        z = inputz;
    }

    void setX(double inx){
        x = inx;
    }
    void setY(double iny){
        y = iny;
    }
    void setZ(double inz){
        z = inz;
    }
    double getX(){
        return x;
    }
    double getY(){
        return y;
    }
    double getZ(){
        return z;
    }
};
