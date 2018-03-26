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

int n,a,b,ans,temp,tmp;

int main(){
	cin>>n>>a>>b;
	for(int i=1;i<n;i++){
		tmp = a/i;
		temp = b/(n-i);
	//	cout<<temp<<" "<<tmp<<endl;
		if(temp!=0  && tmp!=0) tmp = min(tmp, temp);
		if(tmp !=0 && temp != 0) ans = max(ans,tmp);
	}
	cout<<ans<<endl;
}
