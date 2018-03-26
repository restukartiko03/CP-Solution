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

int n,a[2010],sum,now,banyak,minim;

bool dua, tiga;

int main(){
	cin>>n;
	minim = 1000000100;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i] != 1) sum++;
	}
	for(int i=1;i<n;i++){
		if(__gcd(a[i],a[i+1]) == 1){
			dua = true;
			break;
		}
	}
	if(n == 1 && a[1] == 1){
		cout<<0<<endl;
		return 0;
	}
	if(dua){
		cout<<sum<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		now = a[i];
		banyak = 0;
		for(int j=i+1;j<=n;j++){
			now = __gcd(now,a[j]);
			banyak++;
			if(now == 1){
				tiga = true;
				break;
			}
		}
		if(now == 1)minim = min(minim,banyak);
	}
	if(tiga){
		cout<<sum+minim-1<<endl;
	}
	else cout<<"-1"<<endl;
	
}

