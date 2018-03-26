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


using namespace std;

int n,x;
bool ans, a,b,c;

int main(){
	cin>>n;
	ans = true;
	a = true; b = true;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(x == 1 && !a ) ans = false;
		if(x == 2 && !b) ans = false;
		if(x == 3 && !c) ans = false;
		if(x == 1 && a ){
			b = c;
			c = !b;
		}
		if(x == 2 && b ){
			a = c;
			c = !a;
		}
		if(x == 3 && c ){
			b = a;
			a = !b;
		}
	}
	(ans)? puts("YES") : puts("NO");
}



