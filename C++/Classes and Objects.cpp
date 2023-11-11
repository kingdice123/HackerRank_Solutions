class Student {
public:
    vector<int> v;
    void input() {
        int n;
        for (int i = 0; i < 5; ++i) {
            cin >> n;
            v.push_back(n);
        }
    }
    int calculateTotalScore() {
        int sum=0;
        for (int i = 0; i < 5; ++i) {
            sum += v[i];
        }
        return sum;
    }
};

/*in this excercise we only need to create a function, the rest is already made for us. as you can see, each student will have a vector v into which we will
read their scores 5 times. in the input() function, which can be called by st.input() in the code later on because its public. after that we use our
calculate total score function which is just a for loop calculating the sum of the elements of the vector v which contains their scores and returns it*/