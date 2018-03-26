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

string m, n,ans;

int main(){
	cin>>n>>m;
	ans += n[0];
	int i = 1;
	while(i < n.length() && n[i] < m[0]){
		ans += n[i]; i++;
	}
	ans += m[0];
	cout<<ans<<endl;
}
