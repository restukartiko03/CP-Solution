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

long long n, a[101], dp[101][50001],maks;

int ngedp( int idx, int w){
	//cout<<idx<<" "<<w<<endl;
	if(idx > n) return w;
	ll &ret = dp[idx][w];
	if(ret != -1)
		return ret;
	if(a[idx] + w <= (maks)/2)
		return ret = max( ngedp(idx+1,w), ngedp(idx+1,w+a[idx]));
	else return ret = ngedp(idx+1,w);
}

int solve( int x){
	memset(dp, -1, sizeof(dp));
//	cout<<ngedp(1,0)<<endl;
	cout<<maks - 2*ngedp(1,0)<<endl;
}

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		scanf("%d",&n);
		maks = 0;
		for(int j=1;j<=n;j++){
			scanf("%lld",&a[j]);
			maks += a[j];
		}
		solve(i);
	}
}
