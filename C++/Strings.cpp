#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin >> a >> b;
    char a1=a[0],b1=b[0];
    cout << a.size() << " " << b.size();
    cout << "\n"<<a<<b;
    a[0] = b1;
    b[0] = a1;
    cout <<"\n" <<a << " " << b;
    return 0;
}

/*here we first declare two strings, a and b and read them using cin. we make two chars and since strings are arrays of chars, we can use their indexes
to set a1 and b1 to the first character of a and b using a[0] and b[0]. then we using a.size() and b.size() built-in functions to print their size (length)
then we print them both in a seperate line. then we switch their first characters, using the char variables we've made earlier. and print them again
seperated by a space*/