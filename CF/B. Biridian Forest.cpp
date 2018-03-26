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

int ans,n,tx,ty,startx, starty,m, dist[1005][1005];
bool bol=0 ;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
queue < pii > q;
pii p;
string s[1005];

bool valid(int x, int y){
	return x>=0 && y>=0 && x<n && y<m;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++) for(int j=0;j<m;j++) dist[i][j] = 1000000000;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == char(69)){
			//	cout<<i<<" "<<j<<endl;
				q.p(mp(i,j));
				dist[i][j] = 0;
				while(!q.empty()){
					p = q.front(); q.pop();
					for(int ii=0;ii<4;ii++){
						tx = p.fi + dx[ii];
						ty = p.se + dy[ii];
						if(valid(tx,ty) && dist[tx][ty] > dist[p.fi][p.se]+1 && s[tx][ty] != 'T'){
							q.p(mp(tx, ty));
							//cout<<tx<<" "<<ty<<endl;
							dist[tx][ty] = dist[p.fi][p.se] + 1;
						}
					}	
				}
			}
			if(s[i][j] == 'S')startx = i, starty = j;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] >= '1' && s[i][j] <= '9' && dist[i][j] <= dist[startx][starty])
				ans += s[i][j] - '0';
		}
	}
	cout<<ans<<endl;
}
