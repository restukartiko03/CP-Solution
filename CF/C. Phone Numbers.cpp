#include<bits/stdc++.h>
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

int n,m;
string name, phone;
vector< string > vec[30];
map < string, int > mep;
map < string, bool > mp;
vector < string > nama;


bool cmp ( string s, string ss){
	int l = s.length();
	int lol = ss.length();
	return l < lol;
}

int main(){
	cin>>n;
	int hash = 1;
	for(int i=1; i<=n; i++){
		cin>>name>>m;
		if(!mep[name]){
			mep[name] = hash;
			hash ++;
			nama.pb(name);
		}
		for(int i=1; i<=m; i++){
			cin>>phone;
			vec[mep[name]].pb(phone);		
		}
	}
	cout<<nama.size()<<endl;
	for(int i=0; i<nama.size(); i++){
		sort(vec[mep[nama[i]]].begin(), vec[mep[nama[i]]].end(), cmp);
		cout<<nama[i]<<" ";
		mp.clear();
		for(int j=0; j<vec[mep[nama[i]]].size(); j++){
			string s = vec[mep[nama[i]]][j];
		//	if(nama[i] == "petr")
		//		cout<<s<<endl;
			string tmp ="";
			int x = s.length();
			for(int ii=x-1;ii>0;ii--){
				tmp += s[ii];
				string lol = tmp;
				reverse(lol.begin(),lol.end());
				mp[lol] = true;
				reverse(tmp.begin(), tmp.end());
			}
		}
		vector < string > ans;
	//	cout<<vec[mep[nama[i]]][0]<<endl;
		for(int j=0; j<vec[mep[nama[i]]].size(); j++){
			if(!mp[vec[mep[nama[i]]][j]]){
				mp[vec[mep[nama[i]]][j]] = true;
				ans.pb(vec[mep[nama[i]]][j]);
			}
		}
		int idx = ans.size();
		cout<<ans.size()<<" ";
		for(int ii=0; ii+1<ans.size(); ii++)
			cout<<ans[ii]<<" ";
		cout<<ans[idx-1]<<endl;
	}
}
