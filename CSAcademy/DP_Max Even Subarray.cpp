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
#define for(i,x,n) for(int i=x;i<=n;i++)
#define line puts("")


using namespace std;

ll n,a[100010],dp[100010];
ll maks;		

int main(){
	cin>>n;
	for(i,1,n) scanf("%lld",&a[i]);
	dp[2] = a[1]+a[2];
	maks = dp[2];
	dp[3] = a[3]+a[2];
	if(n>2) maks = max(maks,dp[3]);
	for(i,4,n){
		dp[i] = max(dp[i-2]+a[i]+a[i-1],a[i]+a[i-1]);
		maks = max(dp[i],maks);
	}
	cout<<maks<<endl;
}
