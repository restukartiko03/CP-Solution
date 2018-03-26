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

int x,n,k,sum,kelinci,ans,temp,tmp,a[100010],b[100010];

int main(){
	_FAST;
	cin>>n>>k;
	for(int i=0;i<k;i++){
		scanf("%d",&x);
		a[x] = 1;
	}
	for(int i=0;i<k;i++){
		scanf("%d",&x);
		a[x] = 2;
	}
	for(int i=1;i<=n;i++)
		b[i] = a[i];
	kelinci = k;
	if(b[1] == 1 && b[n] == 2){
		sum++;
		kelinci --;
		b[1] = 0;
		b[2] = 0;
	}
	for(int i=2;i<=n;i++){
		if(i ==n && b[i]==1 && b[1] == 2){
			b[i] = 0;
			sum++;
			kelinci--;
		}else
		if( b[i] == 1 && b[i+1] == 2){
			b[i] = 0;
			b[i+1] = 0;
			sum++;
			kelinci--;
		}
		else if( b[i] == 1 && b[i-1] == 2){
			b[i] = 0;
			b[i-1] = 0;
			sum++;
			kelinci--;			
		}
	}
	ans = sum+ (kelinci)*2;
	sum = 0; kelinci = k;
	cout<<ans<<endl;
}
