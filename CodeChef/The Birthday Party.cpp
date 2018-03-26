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
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define MOD 10e9+7

using namespace std;

unsigned long long n,x,t,ans,a[100010], prima[10000],jum[100010];
bool bol[100010];


void prim(){
	memset(bol, true,sizeof(bol));
	for(int i=2;i<=sqrt(100000);i++){
		if(bol[i]){
			for(int j=i+i;j <= 100000;j+=i)
				bol[j] = false;
		}
	}
	int i = 0;
	for(int j=2;j<=100000;j++){
		if(bol[j]){
			prima[i] = j;
			i++;
		}
	}
}

int main(){
	cin>>t;
	prim();
	while(t--){
		memset(bol,-1,sizeof(bol));
		for(int i=1;i<=100000;i++) jum[i] = 0;
		cin>>n;
		for(int i=1;i<=n;i++) scanf("%u",&a[i]);
		ans = 0;
		for(int i=1;i<=n;i++){
			x = a[i];
			if(!bol[x]){
				int tmp = 0;
				x = a[x];
				ans = 1;
				while(x != a[i]){
					bol[x] = true;
					x = a[x];
					ans++;
				}
			//	cout<<i<<" "<<ans<<endl;
				int idx = 0;
				while(ans > 1){
					int temp = 0;
					while(ans%prima[idx] == 0){
						ans /= prima[idx];
						temp ++;
					}	
				//	cout<<temp<<endl;
					if(temp > jum[prima[idx]]) jum[prima[idx]] = temp;
					idx++;
				}
			}
		}
		ans = 1;
		for(int i=0;i<=9592;i++){
			if(jum[prima[i]]!=0){
		//		cout<<prima[i]<<" "<<jum[prima[i]]<<endl;
				for(int j=1;j<=jum[prima[i]];j++){
					ans*= prima[i];
					ans = ans%1000000007;
				}
			}
		}
		cout<<ans<<endl;
	}
}
