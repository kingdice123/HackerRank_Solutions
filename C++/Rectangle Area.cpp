class Rectangle {
public:
    int Width;
    int Height;
    void setWidth(int width) {
        Width = width;
    }
    void setHeight(int height) {
        Height = height;
    }
    virtual void display() {
        printf("%d %d\n", Width, Height);
    }
};

class RectangleArea:public Rectangle {
public:
    int Width, Height, Area;
    void read_input() {
        cin >> Width >> Height;
        Area=Width*Height;
        setWidth(Width);
        setHeight(Height);
    }
    void display() {
        printf("%d", Area);
    }
};


/*here we have a rectangle class with a height and width. we use set functions to set those values, also we have a display() void function which displayes those numbers
then we have a rectangleArea class which inherits from the rectangle class which means that it will have access to its width and height. we use its read_input()
function to calculate the area and the width, use the inherited functions to set them and calculate the area. then we have a display function here too but now it displays the area
this works because our virtual function in the first case. virtual functions can be called in the rectangle but before running it will check if theres
and display() functions inherited and if yes, it will run them instead of itself, if no then it simply runs.*/