#include<bits/stdc++.h>
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

int n,m,x,t,y,w,ind,pq,start,en,dist[10005];

int main(){
	ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--){
		vector < pii > vec[10010];
		priority_queue < pii > pq;
		scanf("%d%d",&n,&m);
		for(int i=0; i<m;i++){
		    scanf("%d%d%d",&x,&y,&w );
		    vec[x].pb(mp(y,-1*w));
		}
		for(int i=1;i<=n;i++) dist[i] = -1000000000;
		scanf("%d%d",&start,&en);
		dist[start] = 0;
	  	pq.p(mp(0,start));
	  	while(!pq.empty()){
		    pii P = pq.top(); pq.pop();
		    //cout<<P.fi<<" "<<P.se<<endl;
		  	for(int i=0; i<vec[P.se].size(); i++){
		        pii temp = vec[P.se][i];
		        if(temp.se + P.fi > dist[temp.fi]){
					dist[temp.fi] = temp.se + P.fi;
			        pq.p(mp(dist[temp.fi], temp.fi));
				}
		    }
	  	}
	  	if(dist[en] == -1000000000) cout<<"NO"<<endl;
	  	else cout<<-1*dist[en]<<endl;
	}
}
