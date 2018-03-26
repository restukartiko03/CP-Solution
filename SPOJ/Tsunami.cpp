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

int n;
double key[1010],ans,x[1010],y[1010];
bool visited[1010];

double jarak ( double a, double b, double c, double d){
	a-=c; b-=d;
	a = sqrt(a*a+b*b);
	return a;
}

int main(){
	while(cin>>n){
		if(n == 0) return 0;
		vector < pair < double, int > > vec[n];
		for(int i=0;i<n;i++)
			scanf("%lf%lf",&x[i],&y[i]);
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				double dist = jarak(x[i],y[i],x[j],y[j]);
				vec[i].pb(mp(dist,j));
				vec[j].pb(mp(dist,i));
			}
		}
		for(int i=0;i<n;i++) visited[i] = false;
		for(int i=1;i<n;i++) key[i] = 10000000000;
		ans = 0; key[0] = 0;
		for(int i=0;i<n;i++){
			double mins = 1000000000;
			int idx;
			for(int ii=0;ii<n;ii++){
				if(!visited[ii] && key[ii] < mins)
					mins = key[ii], idx = ii;
			}
			visited[idx] = 1;
			for(int v=0;v<vec[idx].size();v++){
				if(!visited[vec[idx][v].se] && vec[idx][v].fi < key[vec[idx][v].se] )
					key[vec[idx][v].se] = vec[idx][v].fi;
			}
		}
		for(int i=0;i<n;i++) ans += key[i];
		cout<<ans<<endl;
	}
}
