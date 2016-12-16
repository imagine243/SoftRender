//
//  chimagie.hpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/15.
//  Copyright © 2016年 chao. All rights reserved.
//

#ifndef chimagie_hpp
#define chimagie_hpp

#include <stdio.h>
#include "color.hpp"

class ChImage{
public:
    uint32_t *pixels;
    int width;
    int height;
    
    ChImage(const char * path);
    
    virtual ~ChImage(){
        delete [] pixels;
    }
};

#endif /* chimagie_hpp */
