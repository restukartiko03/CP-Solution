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
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define MOD 10e9+7

using namespace std;

unsigned long long a,s,k,x,y,ans,mid;
bool ada;

int main(){
	cin>>a>>s>>k>>x>>y;
	int mid, l = 0, r = k;
	while(l <= r){
		mid = (l+r)/2;
	//	cout<<mid<<endl;
		if( (a+x*mid) == (s+y*(k-mid))){
			ans = mid;
			ada = true;
			break;
		}
		else if( (a+x*mid) > (s+y*(k-mid)))
			r = mid-1;
		else
			l = mid+1;
	}
	if(ada) cout<<ans<<endl;
	else puts("-1");
}
