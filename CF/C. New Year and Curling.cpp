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
double ra,tmp;
double x[1100],ans[1100];

int main(){
	scanf("%d%lf",&n,&ra);
	for(int i=1;i<=n;i++)
		scanf("%lf",&x[i]);
	for(int i=1;i<=n;i++){
		ans[i] = ra;
		for(int j=1;j<i;j++){
			if(x[i] <= x[j]+2*ra && x[i] >= x[j] - 2*ra ){
				tmp = (x[i]-x[j])*(x[i]-x[j]);
				double temp = (2*ra)*(2*ra);
				tmp = sqrt(temp-tmp);
				ans[i] = max(ans[i],ans[j]+tmp);
			}
		}
	}
	for(int i=1;i<=n;i++) 		printf("%.10lf ",ans[i]);

	line;
}
