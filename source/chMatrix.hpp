//
//  chMatrix.hpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/19.
//  Copyright © 2016年 chao. All rights reserved.
//

#ifndef chMatrix_hpp
#define chMatrix_hpp

#include <stdio.h>

#include "chmath.cpp"

class Matrix {
public:
    float p[16];
    Matrix(){
        for (int i = 0; i < 16; i++) {
            p[i] = 0;
        }
    }
    
    Matrix(float values[]){
        for (int i = 0; i < 16; i++) {
            p[i] = values[i];
        }
    }
    
    bool operator==(const Matrix &m) const {
        bool equal = true;
        for (int i = 0; i < 16 ; i++) {
            equal = equal && floatEqual(p[i], m.p[i]);
        }
        return equal;
    }
    
    static Matrix identity() {
        float values[16] = {
            1, 0, 0, 0,
            0, 1, 0, 0,
            0, 0, 1, 0,
            0, 0, 0, 1,
        };
        return Matrix(values);
    }
    
    
};

#endif /* chMatrix_hpp */
