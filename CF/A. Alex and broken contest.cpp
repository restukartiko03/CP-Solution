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

string s;
int bol,ans;

int main(){
	cin>>s;
	for(int i=0;i<s.length();i++){
		if((i+3) < s.length() && s[i] == 'O' && s[i+1] == 'l' && s[i+2] == 'y' && s[i+3] == 'a')
			ans ++;
		if((i+4) < s.length() && s[i] == 'D' && s[i+1] == 'a' && s[i+2] == 'n' && s[i+3] == 'i' && s[i+4] == 'l')
			ans++;
		if((i+4) < s.length() && s[i] == 'S' && s[i+1] == 'l' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'a')
			ans ++;
		if((i+2) < s.length() && s[i] == 'A' && s[i+1] == 'n' && s[i+2] == 'n' )
			ans++;
		if((i+5) < s.length() && s[i] == 'N' && s[i+1] == 'i' && s[i+2] == 'k' && s[i+3] == 'i' && s[i+4] =='t' && s[i+5] == 'a')
			ans++;			
	}
	if(ans == 1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
