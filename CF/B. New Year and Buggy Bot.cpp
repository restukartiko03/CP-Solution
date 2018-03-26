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

bool valid( int a, int b , int c ,int d){
	if(a == b || a == c || a == d || b == c || b == d || c == d) return false;
	else return true;
}

int n,ans,m,x,y,xx,yy,startx,starty;
string move;
char s[110][100];
char a[20];
char lol[110];

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0; j<m ; j++) {
			cin>>s[i][j];
			if(s[i][j] == 'S'){
				x = i ; y = j;
			}
			if(s[i][j] == 'E'){
				xx = i; yy = j;
			}
		}	
	}
	cin>>move;
	for(int i=0;i<move.length(); i++) lol[i] = move[i];
	char c[4] = {'d', 'u', 'l', 'r'};
	for(int i=0;i<4;i++){
		for(int ii=0;ii<4;ii++){
			for(int j=0;j<4;j++){
				for(int jj=0; jj<4;jj++){
					if(valid(i,ii,jj,j)){
						a[0] = c[i]; a[2] = c[j];
						a[1] = c[ii]; a[3] = c[jj];
						startx = x;
						starty = y;
						for(int k = 0; k<move.length(); k++){
							if(a[lol[k]-'0'] == 'd') startx++;
							else if(a[lol[k]-'0'] == 'u') startx--;
							else if(a[lol[k]-'0'] == 'r') starty++;
							else  starty--;
							if(starty >= m || starty < 0 || startx < 0 || startx >= n) break;
							if(s[startx][starty] == '#') break;
							if(startx == xx && starty == yy) {
								ans++;
								break;
							}
						}
					}
				}
			}
		}
	}
	cout<<ans<<endl;
}
