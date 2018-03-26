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

int sum;
string s;

int main(){
	_FAST;
	cin>>s;
	int n = s.length()-1;
	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			for(int k=j+1;k<=n;k++){
				if(s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q')
					sum++;
			}
		}
	}
	cout<<sum<<endl;
}

