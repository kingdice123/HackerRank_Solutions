#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    if ((n>=1)&&(n<=1000)) {
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        for (int i=(n-1); i>=0;i--) {
            cout << arr[i] << " ";
        }
    }
}
//this is an interesting one because it actually doesnt work anymore lmao
//it tries to introduce arrays in a worng way because in the excercise
//it expects you to replace the 13th row with int arr[n] which wont work because n isnt a constant
//this is why I used vectors (also bc I like them far more than arrays)
//so we make an array (or vector). if we make a vector, we first include the vector lib using #include <vector>
//then we make a vector using the 13th row, we use <type> to define its type and then give it a name.
//optionally you can set the max values at the beginning but its not necessary, this case we set it to n
//using arrays you need to use a constant to set the maximum space
//you would do that by making a constant first using the const keyword, then use "type arr[const];"
//this is useful for storing more values and accessing them using their index, like we use in the for loop arr[i], where we access the ith element of arr
//we can use them just if they were a number, we can add them to a variable, read them, write them