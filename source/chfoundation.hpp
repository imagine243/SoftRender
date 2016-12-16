//
//  chfoundation.hpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/15.
//  Copyright © 2016年 chao. All rights reserved.
//

#ifndef chfoundation_hpp
#define chfoundation_hpp

#include <vector>
#include <string>

static std::vector<std::string> split(const std::string &str, char delimiter){
    std::vector<std::string> l;
    
    std::size_t start = 0;
    std::size_t end = 0;
    while ((end = str.find(delimiter, start)) != std::string::npos) {
        l.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    l.push_back(str.substr(start));
    return l;
}

#endif /* chfoundation_hpp */
