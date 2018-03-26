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

int n,a[3];
char c,before;

int main(){
	_FAST
	cin>>n;
	cin>>c;
	before = c;
	for(int i = 2;i<=n;i++){
		cin>>c;
		if(before == 'S' && c == 'F') a[0] ++;
		else if(before == 'F' && c == 'S') a[1] ++;
		before = c;
	}
	if(a[0] > a[1]) puts("YES");
	else puts("NO");
}
