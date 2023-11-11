#define INF 100000
#define foreach(v,i) for(int i=0; i<v.size(); i++)
#define io(v) cin >> v
#define toStr(s) #s
#define FUNCTION(func, op) void func(int &a, int b) {a = (a op b) ? a : b;}


#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}

/*this is an interesting task because you will have to realise what the kid wanted to do here. it uses the #define keyword which are like functions but they dont return anything
they work because the IDE checks your code before runninng and if it sees a syntax error, it wont run but here we explain it what do they mean
and how to use them and its parameters

personally I hated doing this but here it is you wont have to do it im gonna show you an easier example tho

so usually you pass elements to a vector by usiing push_back() but if you write define slam_it_into_the_vector(parameter), then you can use
v.slam_it_into_the_vector(theValueYouWantToPass) instead of v.push_back(value)*/