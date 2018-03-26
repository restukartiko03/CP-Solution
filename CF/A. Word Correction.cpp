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

string ans, s;
int n;
bool before;
int main(){
	cin>>n;
	cin>>s;
	before = false;
	for(int i=0;i < s.length(); i++){
		if(s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'i' && s[i] != 'u' && s[i] != 'y'){
			before = false;
			ans += s[i];
		}
		else if(!before){
			ans += s[i];
			before = true;
		}
	}
	cout<<ans<<endl;
}
