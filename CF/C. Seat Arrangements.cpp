#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< ll , ll >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

int n,m,k,ans;
int tmp;
string s[2100];

int main(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		tmp = 0;
		for(int j=0;j<m;j++){
			if(s[i][j] == '.') tmp++;
			else tmp = 0;
			if(tmp >= k) ans++;
		}
	}
	for(int i=0;i<m;i++){
		tmp = 0;
		for(int j=0;j<n;j++){
			if(s[j][i] == '.') tmp++;
			else tmp = 0;
			if(tmp >= k) ans++;
		}
	}
	if(k == 1){
		int bin = 0;
		for(int i=0;i<n;i++){
			for(int j=0 ;j<m;j++) if(s[i][j] =='.') bin++;
		}
		cout<<bin<<endl;
	}
	else
	cout<<ans<<endl;
}	
