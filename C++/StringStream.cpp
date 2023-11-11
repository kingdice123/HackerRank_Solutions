#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream string(str);
    char ch;
    int a, i = 0;
    vector<int> v;
    while(string) {
        if (i%2==0)
            string >>a;
        else
            string >> ch;
        i++;
        v.push_back(a);
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i+=2) {
        cout << integers[i] << "\n";
    }

    return 0;
}

/*here we use stringstream to operate strings. Strings are texts but more precisely, arrays of characters (this is important for later tasks)
we read a string (also we could've used getline()) in this case its numbers, seperated by a ",". We then use out parseInts funtion which returns a vector of ints
we initalize out stringstream, make a char type variables (for the ,-s), two integers, a and i and also a vector, which we will return
we use a while loop which runs until there is data coming in from out string.
first we have a number i which starts at a value of 0. then we check if the number is even, which means that we work with a number
if we do, we store our number in the variable a, add one to i (so it wont be even anymore) and use push_back(a) to push a into our v vector.
then our i will be odd which means that because of our input we work with a "," so we just dump it to our char, kinda discarding it, then add 1 to our i so it will be even again
this goes on until we got data in our string, then return our v vector and use a for loop to print it*/
