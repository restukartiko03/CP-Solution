#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

map< string, bool > mep;
int n;
string s[110];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		if(mep[s[i]]) cout<<"YES"<<endl;
		else{
			cout<<"NO"<<endl;
			mep[s[i]] = true;
		}
	}
}
