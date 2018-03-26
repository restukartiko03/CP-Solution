#include<cstdio>
#include<queue>
#include<iostream>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0),
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")

using namespace std;

int n,m,x,y,w,ind;
priority_queue < pii > pq;
vector < pii > vec[5010];
vector < int > ans,dist[5010];

int main(){
	cin>>n>>m;
  for(int i=0; i<m;i++){
    scanf("%d%d%d",&x,&y,&w );
    vec[x].pb(mp(y,-1*w));
    vec[y].pb(mp(x,-1*w));
  }
  pq.p(mp(0,1));
  while(!pq.empty()){
    pii P = pq.top(); pq.pop();
  	if(dist[P.se].size() == 0 || dist[P.se].back() != P.fi)
    	dist[P.se].pb(P.fi);
    else if(dist[P.se].size() > 2) 
		continue;	
	for(int i=0; i<vec[P.se].size(); i++){
        pii temp = vec[P.se][i];
        if(dist[temp.fi].size() >= 2)
        	continue;
    	pq.p(mp(temp.se + P.fi, temp.fi));
    }
  }
  cout<<-1*dist[n][1]<<endl;
}=
