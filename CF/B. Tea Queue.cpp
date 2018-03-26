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

int t,l[1100],r[1010],n;

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) scanf("%d%d",&l[i],&r[i]);
		int k = 1;
		for(int i=0;i<n;i++){
			while(k < l[i]) k++;
			if(k >= l[i] && k <= r[i]){
				cout<<k<<" ";
				k++;
			}
			else cout<<"0 ";
		}
		line;
	}
}
