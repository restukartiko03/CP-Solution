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

ll dp[100010][4],a[100010][4];
ll n,m;
bool visit[100010][4];

long long solve(ll aa, ll bb){
	ll &ret = dp[aa][bb];
 //	cout<<aa<<" "<<bb<<" "<<dp[aa][bb]<<endl;
	if(visit[aa][bb])
		return ret;
	visit[aa][bb] = true;
	if(bb == 1)
		return ret = min( solve(aa-1,bb+1), solve(aa-1,bb)) + a[aa][bb];
	if(bb == 2)
		return ret = min(min(min( solve(aa,bb-1), solve(aa-1,bb)),solve(aa-1,bb+1)),solve(aa-1,bb-1)) + a[aa][bb];
	if(bb == 3)
		return ret = min(min( solve(aa-1,bb-1), solve(aa-1,bb)),solve(aa,bb-1)) + a[aa][bb];	
}


int main(){
	cin>>m;
	ll j = 1;
	while(m)
	{
		for(int i=1;i<=m;i++)
			scanf("%lld%lld%lld",&a[i][1],&a[i][2],&a[i][3]);
		memset(visit,false,sizeof(visit));
		dp[1][2] = a[1][2];
		dp[1][3] = a[1][2]+a[1][3];
		dp[2][1] = a[2][1] + dp[1][2];
		dp[2][2] = a[2][2] + min(min(dp[1][2],dp[1][3]),dp[2][1]);
		dp[2][3] = a[2][3] + min(dp[1][3],min(dp[1][2],dp[2][2]));
		visit[1][2] = true; visit[1][3] = true; visit[2][1] = true;
		visit[2][3] = true; visit[2][2] = true;
		printf("%lld. %lld\n",j,solve(m,2));
		j++;
		cin>>m;
	}
    return 0;
    
}
