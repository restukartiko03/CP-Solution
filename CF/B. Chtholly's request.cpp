#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
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

int banyak( int x){
	int sum = 1;
	while(x > 0){
		sum *= 10;
		x /= 10;
	}
	return sum;
}

int balik( int x){
	int ans = 0;
	while(x > 0){
		ans *= 10;
		ans += x%10;
		x /= 10;
	}
	return ans;
}

long long sum,n,nn,p,idx,a[100010];

int main(){
	n = 1;
	idx = 1;
	cin>>nn>>p;
	while(idx <= nn){
		a[idx] = n*banyak(n) + balik(n);
		a[idx] %= p;
		n++;
		idx++;
	}
	for(int i=1;i<=nn;i++){
		sum += a[i];
		sum %= p;
	}
	cout<<sum<<endl;
}
