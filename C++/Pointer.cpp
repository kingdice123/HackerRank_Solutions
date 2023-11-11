#include <stdio.h>
#include <cmath>
using namespace std;

void update(int *a,int *b) {
    int a2,b2;
    a2=*a+*b;
    b2=abs(*a-*b);
    *a=a2;
    *b=b2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
} 

//this is the first one which might be a bit harder
//we have a and b as numbers, then we make two pointers which point to their memory address
//we use the * to make a pointer and write a & before the variable to get its reference
//after we make the pointers and got the values we make an update finction
//it doesnt have a return because its a void function which means that it doesnt return anything
//in the update function we ask for pointers of a and b as parameters
//inside the function we make two numbers a2 and b2
//using our pointers given, we modify the value of a2 to the sum of a and b using their pointer which is assigned to their reference
//in the same way we give b2 the value of the absolute difference between a and b
//we dont need to return anything, we just modify the values of a and b using their pointers
//we set their values to a2 and b2 and when we print them, it will be the modified values

//this is useful because in general you wont be able to modify a variables value outside its function
//but if you want to do it this is how you do it