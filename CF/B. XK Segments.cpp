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

ll n,awal,b[100010],akhir,x,k,a[100010],ans,sum;

int main(){
	cin>>n>>x>>k;
	for(int i=1;i<=n;i++)
		scanf("%I64d",&a[i]);
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		b[i] = a[i]/x;
	}
	//for(int i=1;i<=n;i++)
	//	cout<<b[i]<<" ";
	//	puts("");
	//	getchar();
	awal = 1;
	akhir = 1;
	while(1){
		ll lol = 1,lil = 1;
		sum = a[akhir]/x - (a[awal]-1)/x;
		while(sum < k && akhir < n){
			akhir++;
			sum = a[akhir]/x - (a[awal]-1)/x;
		}
		while(a[akhir]/x == a[akhir+1]/x && akhir+1 <= n){
			akhir++;
			lol ++;
		}
		while((a[awal]-1)/x == (a[awal+1]-1)/x && awal+1 <= n){
			awal ++;
			lil ++;
		}
	//	cout<<awal<<" "<<akhir<<" "<<sum<<" "<<lol<<" "<<lil<<endl;
	//	getchar();
		if(sum == k){
			ans += (lol)*(lil);
		}
		while(sum >= k && awal < n){
			awal ++;
			sum = a[akhir]/x - (a[awal]-1)/x;
		}
		
		if(akhir == n)
			break;
	}
	cout<<ans<<endl;
}
