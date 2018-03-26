#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pll pair< ll , ll >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

long long ans;
int a[100010],parent[100010];
int n,m,x,y;

int find(int x){
	return x == parent[x] ? x : parent[x] = find(parent[x]);
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		parent[i] = i;
	}
	while(m--){
		scanf("%d%d",&x,&y);
		parent[find(x)] = find(y);
	}
	for(int i=1;i<=n;i++)
		parent[i] = find(i),a[parent[i]] = min(a[i],a[parent[i]]);
	for(int i=1;i<=n;i++){
		if(i == parent[i])
			ans += a[i];
	}
	cout<<ans<<endl;
}
