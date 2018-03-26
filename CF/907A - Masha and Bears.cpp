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

int n,a,b,c,aa,bb,cc;

int main(){
	cin>>a>>b>>c>>n;
	int tmp = 2*n;
	while(tmp > c && tmp > n) tmp--;
	cc = tmp; tmp++;
	while(tmp < b) tmp ++;
	while(tmp <= 2*n) tmp++;	
	bb = tmp; tmp++;
	while(tmp < a) tmp ++;
	while(tmp <= 2*n) tmp++;
	aa = tmp;
	if(a <= aa && 2*a >= aa && b <= bb && 2*b >= bb && c <= cc && 2*c >= cc)
		cout<<aa<<endl<<bb<<endl<<cc<<endl;
	else cout<<"-1"<<endl;
}
