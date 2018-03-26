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

int ans,n,m,a[205][205],cost[11][11];

int main(){
	cin>>n>>m;
	for(int i=0;i<10;i++)
		for(int j=0;j<10;j++) cin>>cost[i][j];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) cin>>a[i][j];
	for(int k=0;k<10;k++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++)
				if(cost[i][k] + cost[k][j] < cost[i][j]){
					cost[i][j] = cost[i][k] + cost[k][j];
				}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] != -1){
				ans += cost[a[i][j]][1];
			}
		}
	}
	cout<<ans<<endl;
}
