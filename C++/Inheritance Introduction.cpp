#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		void description() {
              cout << "In an isosceles triangle two sides are equal\n";
          }
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}


/*here we need to work with inheritance, one of the reasons why classes are so popular. it means that we have a large group of something, like triangles
in our triangles class, we have a function which upon calling, prints that hes a triangle. then we make an isosceles class which inherits propeties fomr the class
triangle. this means that it will have its own propeties but also will have everything that the triangle class has, this is why we can call isc.triangle() in our code
this also can be used like we have a class called employee and it will have a name and an age, then we can have a programmer calss which inherits from the employee class
then it will automatically have a name and an age but it can have individual propeties like favorite programming language, which not any employee might have*/