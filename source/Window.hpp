//
//  Window.hpp
//  SoftRenderMacProj
//
//  Created by chao on 16/12/13.
//  Copyright © 2016年 chao. All rights reserved.
//

#ifndef Window_hpp
#define Window_hpp

#include <stdio.h>
#include <vector>
#include <SDL/SDL.h>

using std::vector;

static const int kWindowWidth = 800;
static const int kWindowHeight = 600;

class Window {
    SDL_Surface * _screen;
    
    int _width;
    int _height;
    
    bool _running;
    
public:
    Window(int argc, char * argv[],int width=kWindowWidth, int height=kWindowHeight,const char * title="Screen")
    {
        if(SDL_Init(SDL_INIT_VIDEO) != 0)
        {
            fprintf(stderr, "SDL_Init failed \n");
        }
        
        SDL_Surface * screen = SDL_SetVideoMode(width, height, 32, SDL_SWSURFACE);
        if(screen == NULL)
        {
            SDL_Quit();
            fprintf(stderr, "SDL_SetVideoMode failed \n");
        }
        _screen = screen;
        
        SDL_WM_SetCaption(title, NULL);
        
        _width = width;
        _height = height;
        
        _running = true;
    }
    
    virtual ~Window()
    {
        
    };
    
    void run()
    {
        while(_running)
        {
            SDL_LockSurface(_screen);
            
            updateInput();
            
            update();
            
            clear();
            
            draw();
            
            show();
        }
    };
    
    void updateInput()
    {
        
    }
    
    void update()
    {
        
    }
    
    void clear()
    {
        
    }
    
    void draw()
    {
        
    }
    
    void show()
    {
        
    }
    
    
};

#endif /* Window_hpp */
