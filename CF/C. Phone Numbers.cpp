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

int n,k,ind;
string ans,s;
map < char, bool > mep;
vector < char > vec;

int main(){
	cin>>n>>k;
	cin>>s;
	for(int i=0 ; i<n;i++){
		if(!mep[s[i]]){
			mep[s[i]] = true;
			vec.pb(s[i]);
		}
	}
	sort(vec.begin(), vec.end());
	ans ="";
	char maks = vec[vec.size()-1];
	for(int i=0;i<min(k,n);i++){
		ans += s[i];
	}
	if(k > n){
		for(int i=n;i<k;i++)
			ans += vec[0];
	}
	if(k <= n)
	for(int i=min(k-1,n-1);i>=0;i--){
		if(s[i] != maks){
			for(int j=0; j<vec.size(); j++){
				if(vec[j] == ans[i]){
					ind = j;
					break;
				}
			}
			ans[i] = vec[ind+1];
			break;
		}
		else{
			ans[i] = vec[0];
		}
	}
	cout<<ans<<endl;
}
