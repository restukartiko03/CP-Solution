#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);
#define MOD 10e9+7

using namespace std;

int n,x,temp,ans,tempp,a[110];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(a[x]  == 0){
			ans++;
			if(temp == 0) temp = x;
			else if(tempp == 0) tempp = x;
		}
		a[x] ++;
	}
	if(ans == 2 && a[temp] == a[tempp]){
		cout<<"YES"<<endl;
		cout<<temp<<" "<<tempp<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
