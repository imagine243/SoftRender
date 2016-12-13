//
//  chmath.hpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/13.
//  Copyright © 2016年 chao. All rights reserved.
//

#ifndef chmath_hpp
#define chmath_hpp

#include <cmath>

const float floatEpsilon = 0.01;
const float PI = 3.1415926535;

static inline bool floatEqual(float a, float b)
{
    return fabsf(a - b) <= floatEpsilon;
}

static inline float radiansFromDegrees(float degrees)
{
    return PI * degrees / 180.0f;
}

static inline float degreesFromRadians(float radians)
{
    return 180.0f * radians;
}
#endif /* chmath_hpp */
