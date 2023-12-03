#include <iostream>
#include "ref.h"
#ifndef VERTEX_H
#define VERTEX_H

using namespace std;

class Vertex {
public:
        int x;
        int y;
        int z;
         int getX();
         int getY();
         int getZ();
        void setX(int inx);
        void setY(int iny);
        void setZ(int inz);
    
    Vertex(int inputx, int inputy, int inputz) : x(inputx), y(inputy), z(inputz) {}

    void setX(int inx){
        x = inx;
    }
    void setY(int iny){
        y = iny;
    }
    void setZ(int inz){
        z = inz;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    int getZ(){
        return z;
    }
};
#endif 