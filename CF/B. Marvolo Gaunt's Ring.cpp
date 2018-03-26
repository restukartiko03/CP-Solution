#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);


using namespace std;

long long ans,p,q,r,a[100005];
int n;

int main(){
	cin>>n;
	cin>>p>>q>>r;
	for(int i=0;i<n;i++)
		scanf("%I64d",&a[i]);
	ll x  = -4e18;
	ll y = x, z = x;
	for(int i=0;i<n;i++){
		x = max(x,p*a[i]);
		y = max(y,x+q*a[i]);
		z = max(z,y+r*a[i]);
	}
	cout<<z<<endl;
}
