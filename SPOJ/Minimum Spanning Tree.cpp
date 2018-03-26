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

bool mst[10005];
int m,n,idx,mins,t,x,y,key[10005];
ll ans1,cost;
vector < pair < int , ll > > vec[10005];

int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d%d%lld",&x,&y,&cost);
        vec[x].pb(mp(y,cost));
        vec[y].pb(mp(x,cost));
    }
    memset(mst, false, sizeof(mst));
    for(int i=2;i<=n;i++) key[i] = 1000000000;
    key[1] = 0;
    for(int i=1;i<n;i++){
      mins = 1000000000;
      for(int ii=1;ii<=n;ii++){
        if(!mst[ii] && key[ii] < mins){
          idx = ii;
          mins = key[ii];
        }
      }
      mst[idx] = true;
      for(int v=0; v<vec[idx].size();v++)
        if(!mst[vec[idx][v].fi] &&  vec[idx][v].se <key[vec[idx][v].fi]){
          key[vec[idx][v].fi] = vec[idx][v].se;
        }
    }
    ans1 = 0;
    for(int i=2;i<=n;i++) ans1 += key[i];
    cout<<ans1<<endl;
}
