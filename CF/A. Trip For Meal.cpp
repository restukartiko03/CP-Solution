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
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define MOD 10e9+7

using namespace std;

int n,a,b,c;

int main(){
	cin>>n>>a>>b>>c;
	int mins = min(a, min(b,c));
	if(n==1) cout<<"0"<<endl;
	else{
		n--;
		int ans = 0;
		if(mins == c){
			ans += min(a,b);
			n--;
			ans += n*mins;
		}
		else{
			ans += n*mins;
		}
		cout<<ans<<endl;
	}
}
