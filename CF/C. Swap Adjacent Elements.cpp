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

int n,a[200100],maks;
string s;
bool bol = true;

int main(){
	cin>>n;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	cin>>s;
	maks = a[0];
	for(int i=1;i<n;i++){
		if(maks > a[i]){
			if(s[i-1] == '0'){
				bol = false;
				break;
			}
		}
		else maks = a[i];
	}
	(bol) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	
}
