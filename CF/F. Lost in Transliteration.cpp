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
string s,ss;
map < string , bool > mep;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		ss = s;
		for(int j=0;j+1<ss.length();j++){
			while(ss[j] == 'o' && ss[j+1] =='o'){
				ss.erase(j+1,1);
				ss[j] = 'u';
			}
			while(j+1 < ss.length() && ss[j] == 'k' && ss[j+1] =='h'){
				ss.erase(j,1);	
				j--;	
			}
		}
		string fck = "";
		for(int j=0;j<ss.length();j++){
			if(ss[j] == 'u'){
				fck += "oo";
			}
			else fck += ss[j];
		}
		if(!mep[fck]){
			mep[fck] = true;
			ans ++;
	//		cout<<fck<<" == "<<ss<<endl;
		}
	}
	cout<<ans<<endl;
		
}
