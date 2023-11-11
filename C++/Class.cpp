#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int Age;
    string First_name;
    string Last_name;
    float Standard;
public:
    int get_age() {
        return Age;
    }
    void set_age(int age) {
        Age=age;
    }
    string get_first_name() {
        return First_name;
    }
    void set_first_name(string first_name) {
        First_name=first_name;
    }
    string get_last_name() {
        return Last_name;
    }
    void set_last_name(string last_name) {
        Last_name=last_name;
    }
    float get_standard() {
        return Standard;
    }
    void set_standard(float standard) {
        Standard=standard;
    }
    string to_string() {
        stringstream ss;
        ss << Age << "," << First_name << "," << Last_name << "," << Standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}


/*calsses are essentially the more useful versions of structs, with inheriting, virtual functions and abstract classes and many more.
classes have 3 types of variables and functions. public, private and protected. by default everything is private which means that you cant write it from 
outside the calss, this is why we make get and set functions which are public which means that they can be accessed from outside the function. set functions
are void functions because they dont return anything, they just set a value. In contrast get functions are used to get a name or a number which means
that they have a type, according to what they return. set functions have a parameter, this is what they set to their variables, get functions dont have
parameters, they just get a value and return it.
you need these functions because the variables are private so only our functions can access them.
we can call functions of calsses the same way as we can access their variables if they are public*/