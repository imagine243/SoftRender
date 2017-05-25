#import <Cocoa/Cocoa.h>
#import <SDL/SDL.h>

#include "Window.hpp"

int main(int argc, char *argv[]) {
    Window win = Window(argc, argv);
    
    win.run();
    
    NSLog(@"Hello, World!");
    
    return 0;
}
