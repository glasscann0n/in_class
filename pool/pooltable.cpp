#pragma once

#include "Poolball.h"
const int MAXBALLS = 5;

class Pooltable {
    private:
        int width;
        int height;
        int screenX;
        int screenY;
        Poolball balls[MAXBALLS];
        void checkCollisions( int i, int j );
    public:
        // constructor
        Pooltable( int x, int y, int w, int h, int argc, char *argv[] );

        // accessors
        int getWidth( void );
        int getHeight( void );
        int getX( void );
        int getY( void );

        // mutators
        void placeBalls( void );
        void run( void );
};
