#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int age,standard;
    string first_name,last_name;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    return 0;
}


/*this is somethign you wont ever use again, you will use classes because they are way more powerful and capable of more things but the excercise wants us to use structs
we make a struct student, essentially making a type of variable, which will have an age a standard a first and a last name, using the appropriate variable type
then we make a st vaiable with the type of our struct, student. we can access its propeties using . as you can see in st.age for example which reads a value into the age of our st
the same way we read its first, last name and its standard then pring it seperated by spaces*/