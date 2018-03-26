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

int n,tmp,tmp1;
string s;
bool bol,boll;

int main(){
	cin>>n;
	cin>>s;
	bol = true;
	for(int i=0;i+1<s.length();i++){
		if(s[i] != '?'){
			if(s[i] == s[i+1]) bol = false;
		}
		if(s[i] == '?' && s[i+1] == '?') tmp1++;
	}
	for(int i=1;i+1<n;i++){
		if(s[i-1] != s[i+1] && s[i] == '?') tmp++;
		if(s[i-1] == s[i+1] && s[i] == '?') tmp1++;
	
	}
	if(s[0] == '?') tmp1 ++;
	if(s[n-1] == '?') tmp1++;
	if(!bol || (tmp && !tmp1)) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}	
