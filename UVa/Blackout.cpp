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

bool mst[105];
int m,n,idx,mins,t,ans1,ans2,x,y,cost,key[105], second[105];

int main(){
  cin>>t;
  while(t--){
    cin>>n>>m;
    vector < pii > vec[n+1];
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&x,&y,&cost);
        vec[x].pb(mp(y,cost));
        vec[y].pb(mp(x,cost));
    }
    memset(mst, false, sizeof(mst));
    for(int i=2;i<=n;i++) key[i] = 1000000000;
    for(int i=2;i<=n;i++) second[i] = 1000000000;
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
          second[vec[idx][v].fi] = key[vec[idx][v].fi];
          key[vec[idx][v].fi] = vec[idx][v].se;
        }
        else if(!mst[vec[idx][v].fi])
          second[vec[idx][v].fi] = min(second[vec[idx][v].fi], vec[idx][v].se);
    }
    ans1 = 0; ans2 = 0;
    for(int i=2;i<=n;i++) ans1 += key[i]; ans2 = 1000000000;
    for(int i=2;i<=n;i++){
      ans1 -= key[i];
      ans1 += second[i];
      if(ans1 < ans2){
        cout<<"woy = "<<i<<" "<<key[i]<<" "<<second[i]<<endl;
      }
      ans2 = min(ans2, ans1);
      ans1 -= second[i];
      ans1 += key[i];
    }
    cout<<ans1<<" "<<ans2<<endl;
  }
}
