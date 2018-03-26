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

ll n,ans,tmp,k,a,b;

int main(){
	cin>>n>>k>>a>>b;
	if(k == 1){
		cout<<(n-1)*a<<endl;
		return 0;
	}
	while(n != 1){
		tmp = n/k;
		if(n%k == 0){
			ans += min((n-tmp)*a,b);
			n = tmp;
		}
		else if( n< k){
			ans += (n-1)*a;
			n = 1;
		}
		else{
			tmp*=k;
			ans += (n-tmp)*a;
			n = tmp;
		}
	}
	cout<<ans<<endl;
}
