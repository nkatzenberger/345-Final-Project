#include <iostream>
#include "ref.h"
#pragma once
#ifndef VERTEX_H
#define VERTEX_H

using namespace std;

class Vertex {
public:
        float x;
        float y;
        float z;
        
    Vertex(float inputx, float inputy, float inputz) : x(inputx), y(inputy), z(inputz) {}

    void setX(float inx){
        this -> x = inx;
    }
    void setY(float iny){
        this -> y = iny;
    }
    void setZ(float inz){
       this ->z = inz;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    float getZ(){
        return z;
    }
};
#endif;