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

int n,ans,x;
bool bol[1000];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(!bol[x] && x != 0){
			ans++;
			bol[x] = true;
		}
	}
	cout<<ans<<endl;
}
