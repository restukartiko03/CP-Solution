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

long long n,a[2001],dp[2001][2001];

ll ngedp ( int kiri, int kanan, int res){
	long long &ret = dp[kiri][kanan];
	if(ret != -1) return ret;
	if(kiri == kanan)
		return ret = a[kiri]*res;
	return ret = max( a[kiri]*res + ngedp(kiri+1,kanan,res+1) , a[kanan]*res + ngedp(kiri,kanan-1,res+1));
}

int main(){
	cin>>n;
	memset(dp,-1,sizeof(dp));
	for(int i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	
	cout<<ngedp(1,n,1)<<endl;
}
