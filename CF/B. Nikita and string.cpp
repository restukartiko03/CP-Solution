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
int ans,tmp,a[5100],b[5100],aa[5100];

int main(){
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i] == 'a'){
			a[i] = a[i-1]+1;
			b[i] = b[i-1];
		}
		else{
			b[i] = b[i-1]+1;
			a[i] = a[i-1];
		}
	}
	int leng = s.length();
	for(int i=leng-1;i>=0;i--){
		if(s[i] == 'a')
			aa[i] = aa[i+1]+1;
		else aa[i] = aa[i+1];
	}
	ans = max(b[leng-1],a[leng-1]);
	for(int i=0;i<leng;i++){
		for(int ii = i; ii<leng;ii++){
			tmp = a[i-1] + b[ii]-b[i-1] + aa[ii+1];
			//cout<<i<<" "<<ii<<" "<<tmp<<endl;
			ans = max(ans,tmp);	
			//cout<<ans<<endl;
		}
	}
	cout<<ans<<endl;
}
