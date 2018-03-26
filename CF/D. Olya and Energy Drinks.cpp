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

int n,m,k,a[1100][1100];
string s[1100];
queue < pair < int, pair < int , int > > > q;
int xx,xxx,x,y,yy,yyy;
pair < int , pair < int , int > >  tmp;
int main(){
	cin>>n>>m>>k;
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++) a[i][j] = 1000000000;
	}
	for(int i=0;i<n;i++)
		cin>>s[i];
	cin>>x>>y>>xx>>yy;
	x--;xx--;y--;yy--;
	q.p(mp(0,mp(x,y)));
	while(!q.empty()){
		tmp = q.front();
		xxx = tmp.se.fi;
		yyy = tmp.se.se;
		//cout<<xxx<<" "<<yyy<<" "<<tmp.fi<<endl;
		a[xxx][yyy] = min(a[xxx][yyy],tmp.fi);
		q.pop();
		s[xxx][yyy] = '#';
		
		int j = xxx+1;
		int cnt = 1;
		while(j < n && s[j][yyy] == '.' && cnt <= k){
			q.p(mp(tmp.fi+1,mp(j,yyy)));
			s[j][yyy] = '#';
			j++;
			cnt ++;
		}
		j = xxx-1;
		cnt = 1;
		while(j >= 0 && s[j][yyy] == '.' && cnt <= k){
			q.p(mp(tmp.fi+1,mp(j,yyy)));
			s[j][yyy] = '#';
			j--;
			cnt ++;
		}
		j = yyy-1;
		cnt = 1;
		while(j >= 0 && s[xxx][j] == '.' && cnt <= k){
			q.p(mp(tmp.fi+1,mp(xxx,j)));
			s[xxx][j] = '#';
			j--;
			cnt++;
		}
		j = yyy+1;
		cnt = 1;
		while(j < m && s[xxx][j] == '.' && cnt <= k){
			q.p(mp(tmp.fi+1,mp(xxx,j)));
			s[xxx][j] = '#';
			j++;
			cnt++;
		}
	}
//	for(int i=0;i<n;i++) cout<<s[i]<<endl;
	if(a[xx][yy] == 1000000000) a[xx][yy] = -1;
	cout<<a[xx][yy]<<endl;
}
