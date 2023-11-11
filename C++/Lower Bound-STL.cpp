#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int y;
        cin >> y;
        auto it = lower_bound(v.begin(), v.end(), y);

        if (it == v.end()) {
            cout << "No " << n + 1 << endl;
        } else {
            cout << (*it == y ? "Yes " : "No ") << (it - v.begin() + 1) << endl;
        }
    }

    return 0;
}

/*in the first part of our code we just read the values of n, v and q. the second for loop is q long, (queries). we declare an int y which we need to find in the array given
for this we can use a built in function called lower_bound() which does exactly that. We give it a range using iterators and as the third argument, the values
we are looking for and store the value of the position in an iterator. then we check if we could find it, if the lower bound returns the end of the 
vector, then we couldnt find it and then we print n+1, the smallest number which has a higher value than the number we're looking for.
if we did manage to find it then we print it, printing yes if the pointer of the it is equal to the value of y, no if it doesnt, then we print the number needed
using this simple form of our iterator of the number from which we need to subrtact the beginning so we get the index and add 1 since the indexing starts from 0 not 1*/