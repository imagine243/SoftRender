//
//  vertex.hpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/14.
//  Copyright © 2016年 chao. All rights reserved.
//

#ifndef vertex_hpp
#define vertex_hpp

#include <stdio.h>
#include "Vector.hpp"
#include "color.hpp"

class Vertex{
public:
    Vector position;
    Vector normal;
    float u;
    float v;
    Color color;
    Vertex(const Vector &position, const Vector normal, float u, float v, const Color &color = Color()){
        this->position = position;
        this->normal = normal;
        this->u = u;
        this->v = v;
        this->color = color;
    }
    
    Vertex interpolate(const Vertex & vertex, float factor) const{
        Vector p = position.interpolate(vertex.position, factor);
        Vector n = normal.interpolate(vertex.normal, factor);
        float tu = u + (vertex.u - u)* factor;
        float tv = v + (vertex.v - v)* factor;
        Color c = color.interpolate(vertex.color, factor);
        return Vertex(p, n, tu, tv,c);
    }
};


#endif /* vertex_hpp */
