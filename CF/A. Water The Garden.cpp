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

int n,t,k,a[210],ans;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<k;i++) cin>>a[i];
		sort(a,a+k);
		ans = a[0];
		for(int i=1;i<k;i++){
			ans = max(ans,(a[i]-a[i-1]+2)/2);
		}
		ans = max(ans,n-a[k-1]+1);
		cout<<ans<<endl;
	}
}
