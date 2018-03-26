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

int n,m,k,x;
bool bol;
vector < int > vec[100000];
int main(){
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		vec[x%m].pb(x);
	}
	for(int i=0;i<m;i++){
		if(vec[i].size() >= k){
			printf("Yes\n");
			for(int j=0;j<k;j++){
				printf("%d ",vec[i][j]);
			}
			bol = true;
			
		}   
	}
	if(!bol) puts("No");
}
