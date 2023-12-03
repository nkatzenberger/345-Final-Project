#include <iostream>
#include "ref.h"
#pragma once
#ifndef VERTEX_H
#define VERTEX_H

using namespace std;

class Vertex {
public:
        int x;
        int y;
        int z;
        
    Vertex(int inputx, int inputy, int inputz) : x(inputx), y(inputy), z(inputz) {}

    void setX(int inx){
        this -> x = inx;
    }
    void setY(int iny){
        this -> y = iny;
    }
    void setZ(int inz){
       this ->z = inz;
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