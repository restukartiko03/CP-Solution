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

int n,k,t;
bool bol[100],b[100];
string s,ss;

int main(){
	cin>>t;
	while(t--){
		memset(bol,false,sizeof(bol));
		cin>>s;
		for(int i=0;i<s.length();i++)
			bol[s[i]-'a'] = true;
		cin>>n>>k;
		vector < string > sss;
		for(int i=1;i<=n;i++){
			cin>>ss;
			memset(b,false,sizeof(b));
			int ans = 0;
			for(int ii=0;ii<ss.length();ii++){
				if(bol[ss[ii] - 'a'] && !b[ss[ii] - 'a']){
					ans++;
					b[ss[ii]-'a'] = true;;
				}
			}
			if(ans >= k) sss.pb(ss);
		}
		if(sss.size() > 0){
			puts("Yes");
			for(int i=0;i<sss.size();i++)
				cout<<sss[i]<<endl;
		}
		else puts("No");
	}
}
