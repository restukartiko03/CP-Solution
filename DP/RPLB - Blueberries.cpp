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

int n, a[1001], dp[1001][1001],W;

int ngedp( int idx, int w){
	if(idx > n) return w;
	int &ret = dp[idx][w];
	if(ret != -1)
		return ret;
	if(a[idx] + w <= W)
		return ret = max( ngedp(idx+1,w), ngedp(idx+2,w+a[idx]));
	else return ret = ngedp(idx+1,w);
}

int solve( int x){
	memset(dp, -1, sizeof(dp));
	cout<<"Scenario #"<<x<<": "<<ngedp(1,0)<<endl;
}

int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		scanf("%d%d",&n,&W);
		for(int j=1;j<=n;j++) scanf("%d",&a[j]);
		solve(i);
	}
}
