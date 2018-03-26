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

int n,ans,close,x;
vector < pair <int , int > > vec;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		vec.pb(mp(x,i));
	}
	sort(vec.begin(), vec.end());
	close = abs(vec[0].se - vec[1].se);
	for(int i=2;i<n;i++){
		if(vec[i].fi != vec[i-1].fi) break;
		else{
			close = min(close, abs(vec[i].se-vec[i-1].se));
		}
	}
	cout<<close<<endl;
}
	
