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

int n,m,l,r;
char c1,c2;
string s;

int main(){
	cin>>n>>m;
	cin>>s;
	for(int i=1;i<=m;i++){
		cin>>l>>r>>c1>>c2;
		l--; r--;
		for(int j=l;j<=r;j++){
			if(s[j] == c1)
				s[j] = c2;
		}
	}
	cout<<s<<endl;
}
