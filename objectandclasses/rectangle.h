#ifndef RECTANGLE_H
#define RECTANGLE_H

// Class Rectangle Declaration
class Rectangle {
    // member variables
    private:
        int width;
        int height;
        int startx;
        int starty;

    // member functions
    public:
        void setWidth(int width);
        void setHeight(int height);
        void set_x_pos(int xpos);
        void set_y_pos(int ypos);
};
#endif



