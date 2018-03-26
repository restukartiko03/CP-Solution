#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

int n;
vector < int > vec;
stack < int > st;

int solution(vector<int> &H) {
    // write your code in C++14 (g++ 6.2.0)
	stack < int > st;
	int ans = 0;
	for(int i=0;i<H.size();i++){
		while(!st.empty() && st.top() > H[i])
			st.pop();
		if(st.empty() || st.top() < H[i]){
			ans++;
			st.push(H[i]);
		}
	}
	return ans;
}

int main(){
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		vec.pb(x);
	}
	cout<<"ans = "<<solution(vec)<<endl;;
}
