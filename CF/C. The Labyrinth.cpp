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

int n,m,ans,tagg,value[1000005];
string s[1005];
int tag[1005][1005];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};
bool visit[1005][1005];

bool valid(int x, int y){
	return x>=0 && y>=0 && x<n && y<m;
}


int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>s[i];
	memset(visit,false,sizeof(visit));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == '.' && !visit[i][j]){
				tagg++;
				visit[i][j] = 1;
				queue < pii > q;
				q.p(mp(i,j));
				while(!q.empty()){
					value[tagg]++;
					pii p = q.front(); q.pop();
					tag[p.fi][p.se] = tagg;
					for(int ii=0;ii<4;ii++){
						int tx = p.fi + dx[ii];
						int ty = p.se + dy[ii];
						if(valid(tx,ty) && s[tx][ty] == '.' && !visit[tx][ty])
							q.p(mp(tx,ty)), visit[tx][ty] = 1;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == '*'){
				set <int> st;
				ans = 1;
				for(int ii=0;ii<4;ii++)
					if(valid(i+dx[ii], j+dy[ii]) && s[i+dx[ii]][j+dy[ii]]!='*' ) st.insert(tag[i+dx[ii]][j+dy[ii]]);
				for(set<int>::iterator it=st.begin();it!=st.end();it++){
					ans += value[*it];
				}
				ans%=10;
				s[i][j] = ans+'0';
			}
		}
	}
	for(int i=0;i<n;i++) cout<<s[i]<<endl;
}
