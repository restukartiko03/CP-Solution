#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< ll , ll >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

ll n;

ll sum( ll x){
	ll tmp = 0;
	while(x != 0){
		tmp += x%10;
		x/=10;
	}
	return tmp;
}

int main(){
	cin>>n;
	ll i = 18;
	while(n--){
		i++;
		while (sum(i) != 10) i++;
	}
	cout<<i<<endl;
}
