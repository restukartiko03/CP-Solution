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

int n,x,y,tx,ty,val,dist[1005][1005];
pii p;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
string s[1005];

bool valid(int n, int m){
	return n>=0 && m>=0 && x>n && y>m;
}


int main(){
	cin>>n;
	while(n--){
		cin>>x>>y;
		for(int i=0;i<1000;i++)
			for(int j=0;j<1000;j++) dist[i][j] = 10000000;
		for(int i=0;i<x;i++) cin>>s[i];
		deque < pii > q;
		q.pb(mp(0,0)); dist[0][0] = 0;
		while(!q.empty()){
			p = q.front(); q.pop_front();
			for(int i=0;i<4;i++){
				tx = p.fi + dx[i]; ty = p.se + dy[i];
				if(valid(tx, ty)){
					if(s[p.fi][p.se] != s[tx][ty]) val = 1;
					else val = 0;
			//		cout<<tx<<" "<<ty<<" "<<val<<endl;
					if(dist[p.fi][p.se] + val < dist[tx][ty]){
						dist[tx][ty] = dist[p.fi][p.se] + val;
						if(val == 1)
							q.pb(mp(tx,ty));
						else
							q.push_front(mp(tx,ty));
					}
				}
			}
		}
		cout<<dist[x-1][y-1]<<endl;
	}
}
