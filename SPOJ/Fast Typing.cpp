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

int x,sum,a[100];
string s;

int main(){
	_FAST;
	cin>>s;
	for(int i=0 ;i<26;i++)
		cin>>a[i];
	for(int i=0;i<s.length();i++){
		sum += a[s[i]-'a'];
	}
	cout<<sum<<endl;
}
