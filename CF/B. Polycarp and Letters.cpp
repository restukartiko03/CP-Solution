#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define MOD 10e9+7

using namespace std;

int n,temp,ans;
string s;

int main(){
	cin>>n;
	cin>>s;
	temp = -1000;
	set < char > st;
	for(int i=0 ;i<n;i++){
		if(s[i] >= 'a' && s[i] <= 'z' ){
			if(st.count(s[i]) == 0)ans ++;
			st.insert(s[i]);
		}
		else{
			temp = max(temp,ans);
			ans = 0;
			st.clear();
		}
	}
	temp = max(temp,ans);
	cout<<temp<<endl;
}
