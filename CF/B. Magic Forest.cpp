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

int n,ans;

bool lol( int a, int b, int c){
	int tmp = a^b; tmp^=c;
	return tmp == 0;
}
bool asu(int a , int b, int c){
	int x = a+b, y = a+c, z=b+c;
	return (x>c && y>b && z>a);
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int k = i^j;
			if(asu(i,j,k) && k >= i && k >= j && k<=n) ans++;
		}
	}
	cout<<ans<<endl;
}
