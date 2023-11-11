#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        printf("%d ", v[i]);
    }
    return 0;
}


/*in this excercise we decalre a vector v and an int n, declaring the length of the vector v, then read values into v and use the built in sort function
to sort it, giving it two iterators as parameters, v.begin and v.end and using a for loop we print the sorted vector*/