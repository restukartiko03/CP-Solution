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

unsigned ll l,r,mid,n,ans,m,x,y;

bool valid ( unsigned ll xx){
	return ((xx*x) <= (m+(n-xx)*y));
}

int main(){
	cin>>n>>m>>x>>y;
	l = 0;
	r = n;
	while(l <= r){
		mid = (l+r)/2;
		//cout<<mid<<endl;
		if(valid(mid)){
			if(!valid(mid+1)){
				ans = mid;
				break;
			}
			else
				l = mid + 1;
		}
		else
			r = mid - 1;
	}
	if(l>r) ans = r;
	cout<<ans<<endl;
}
