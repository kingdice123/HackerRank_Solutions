#include <bits/stdc++.h>


using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    if ((n>=1)&&(n<=9)) {
        if(n==1)
        printf("one");
        else if(n==2)
        printf("two");
        else if(n==3)
        printf("three");
        else if(n==4)
        printf("four");
        else if(n==5)
        printf("five");
        else if(n==6)
        printf("six");
        else if(n==7)
        printf("seven");
        else if(n==8)
        printf("eight");
        else if(n==9)
        printf("nine");
    }
    else
        printf("Greater than 9");
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

//in this excercise, the input handling is aready done for us
//we just check if the number is between the inclusive range of 1 and 9
//if yes, we print the name of the number, if not, we just say its greater than 9
//in these cases later on we will use switch cases but here it asks for if statements