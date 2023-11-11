#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Triangle{
public:
    void triangle(){
        printf("I am a triangle\n");
    }
};

class Isosceles:public Triangle{
public:
    void isosceles(){
        printf("I am an isosceles triangle\n");
    }
};

class Equilateral:public Isosceles{
public:
    void equilateral(){
        printf("I am an equilateral triangle\n");
    }
};

int main() {
    Equilateral equ;
    equ.equilateral();
    equ.isosceles();
    equ.triangle();
    return 0;
}


/*this is a pretty simple task, which shows the multi level inheritance, like now, equilateral will have access to isosceles but because isosceles also inherits
from the triangle and equilateral inherits from isosceles, it automatically inherits from triangle as well*/