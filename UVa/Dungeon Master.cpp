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

int n,tx,ty,tz,startx,starty,startz,x,y,z,endz,endx,endy;
int dx[] = {0,0,0,0,-1,1};
int dy[] = {0,0,-1,1,0,0};
int dz[] = {-1,1,0,0,0,0};
string s[31][31];
int val[31][31][31];
pair < int, pii > p;
queue < pair < int , pii > > q;

bool valid (int xx, int yy, int zz){
	return xx>=0 && yy>=0 && zz>=0 && xx<x && yy<y && zz<z;
}

int main(){
	while(cin>>x>>y>>z){
		if(!x && !y && !z) return 0;
		for(int i=0;i<x;i++)
			for(int j=0;j<y;j++) cin>>s[i][j];
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				for(int k=0;k<z;k++){
					val[i][j][k] = 1000000000;
					if(s[i][j][k] == 'S') startx = i, starty = j, startz = k;
					if(s[i][j][k] == 'E') endx = i, endy = j, endz = k;
				}
			}
		}
		q.p(mp(startx, mp(starty, startz)));
		val[startx][starty][startz] = 0;
		while(!q.empty()){
			p = q.front(); q.pop();
			//cout<<p.fi<<" "<<p.se.fi<<" "<<p.se.se<<" "<<val[p.fi][p.se.fi][p.se.se]<<endl;
			for(int i=0;i<6;i++){
				tx = p.fi + dx[i];
				ty = p.se.fi + dy[i];
				tz = p.se.se + dz[i];
				if(valid(tx, ty, tz) && s[tx][ty][tz] != '#' && val[tx][ty][tz] > val[p.fi][p.se.fi][p.se.se]+1){
					val[tx][ty][tz] = val[p.fi][p.se.fi][p.se.se]+1;
					q.p(mp(tx, mp(ty, tz)));
				}
			}
		}
		if(val[endx][endy][endz] != 1000000000) cout<<"Escaped in "<<val[endx][endy][endz]<<" minute(s)."<<endl;
		else cout<<"Trapped!"<<endl;
	}
}
