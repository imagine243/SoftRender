//
//  chimagie.cpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/15.
//  Copyright © 2016年 chao. All rights reserved.
//

#include <fstream>
#include <string>
#include <sstream>

#include "chimagie.hpp"
#include "chfoundation.hpp"

ChImage::ChImage(const char * path){
    std::ifstream imageFile(path);
    std::string line;
    
    //eat file descriptor and version
    getline(imageFile, line);
    getline(imageFile, line);
    
    getline(imageFile, line);
    width = atoi(line.c_str());
    
    getline(imageFile, line);
    height = atoi(line.c_str());
    
    pixels = new uint32_t[width * height];
    
    const char delimiter = ' ';
    for (int i = 0; i < height; i++) {
        getline(imageFile, line);
        auto row = split(line, delimiter);
        for(int j = 0; j < width; j++) {
            std::stringstream s(row[j]);
            unsigned int pixel;
            s >> pixel;
            pixels[i * width + j] = pixel;
        }
    }
}
