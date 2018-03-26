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

int n,k;

bool prime( int m){
	for(int i=2;i<=min(k,31623);i++){
		if(m%i == 0) return false;
	}
	return true;
}

int main(){
	cin>>k>>n;
	while(!prime(n)){
		n--;
	}
	if(n > k)cout<<n<<endl;
	else cout<<"-1"<<endl;
}
