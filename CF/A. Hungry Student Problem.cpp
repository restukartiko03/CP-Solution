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

int n,a[110];
bool b[110];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	b[3] = true;
	b[7] = true;
	for(int i=4;i<=100;i++){
		if(b[i-3] || b[i-7]) b[i] = true;
	}
	for(int i=1;i<=n;i++){
		if(b[a[i]]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
