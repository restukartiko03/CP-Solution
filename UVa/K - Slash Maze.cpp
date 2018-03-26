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

int x,y,xx,yy,cnt;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
char c[250][250], tmp[100][100];
string ch[100];
bool bol ;

bool valid( int i, int j){
	return i >= 0 && j >= 0 && i < x*3 && j < y*3;
}

bool isCorner(int mbuh, int mbuh2){
	return (mbuh == 0 || mbuh2 == 0 || mbuh == x*3-1 || mbuh2 == y*3-1);
}

int main(){
	scanf("%d%d",&y,&x);
	while( x && y){
		int cycle = 0;
		for(int i=0;i<x;i++) cin>>ch[i];
		for(int i=0;i<x;i++){
			for(int j=0;j<y;j++){
				if(ch[i][j] == '/'){
					for(int ii=i*3; ii<i*3+3;ii++)
						for(int jj=j*3; jj<j*3+3;jj++){
							if(ii+jj-i*3-j*3 == 2) c[ii][jj] = '/';
							else c[ii][jj] = '.';
						}
				}
				else{
					for(int ii=i*3; ii<i*3+3;ii++)
						for(int jj=j*3; jj<j*3+3;jj++){
							if(ii-i*3 == jj-j*3) c[ii][jj] = '\\';
							else c[ii][jj] = '.';
						}	
				}
			}
		}
		int maks = 0,sum = 0;
		for(int i=0;i<x*3;i++){
			for(int j=0;j<y*3;j++){
				queue < pair < int, int > > q;
				bol = 0;
				if(c[i][j] == '.' && valid(i,j)){
					q.p(mp(i,j));
					c[i][j] = 'a';
					bol = 1;
				}
				sum = 0;
				while(!q.empty()){
					sum++;
					xx = q.front().fi;
					yy = q.front().se;
					q.pop();
					if(isCorner(xx,yy)){
						sum = -1000;
						bol = false;
					}
					for(int ii=0;ii<4;ii++){
						if(valid(xx+dx[ii], yy+dy[ii]) && c[xx+dx[ii]][yy+dy[ii]] == '.'){
							q.p(mp(xx+dx[ii], yy+dy[ii]));
							c[xx+dx[ii]][yy+dy[ii]] = 'a';
						} 
					}
				}
				if(bol){
				//	cout<<sum/3<<endl;
					cycle ++;
					maks = max(maks, sum/3);
				}
		//		cout<<i<<" "<<j<<endl;
			}
		}cout<<"Maze #"<<++cnt<<":\n";
		if(cycle != 0){
			cout<<cycle<<" Cycles; the longest has length "<<maks<<"."<<endl;
		}
		else
			cout<<"There are no cycles."<<endl;
		cout<<endl;
		scanf("%d%d",&y,&x);
	}
}
