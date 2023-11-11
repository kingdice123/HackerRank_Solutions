#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int n, x, a, b;
    long size;
    scanf("%d", &n);
    vector<int> v;
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        v.push_back(x);
    }
    scanf("%d", &x);
    v.erase(v.begin() + x-1);
    scanf("%d%d", &a, &b);
    v.erase(v.begin() + a-1, v.begin() + b-1);
    printf("%d\n", v.size());
    for (int i = 0; i < v.size(); i++) {
        printf("%d ", v[i]);
    }
    return 0;
}

/*in this example we have an n long vector v. we read its values from the console using scanf. then we use x to determine a position in the vector which
should be removed using the erase() function. this requires either an iterator or two iterators declaring a range. now we only use one, x which we add to the
iterator of the beginning of the vector. we subrtact 1 because the fist element is 0 not 1.
then we read a and b declaring a range. this time we give our erase function two parameters, both added to the beginning and subtracted 1
then we use the also built in size function to print its size and a for loop to pring the elements of our vector v*/