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

int n,ans,sum,m,k,awal,akhir,x;
bool a[1001000];
int main(){
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		a[x] = true;
	}
	for(int i=1;i<=m;i++){
		if(a[i]) sum++;
		if(sum == k){
			sum--;
			ans++;
			a[i] = false;		
		}
	}
//	cout<<sum<<endl;
	awal = 1; akhir = m;
	while( akhir <= 1000000){
		if(a[akhir+1]) sum++;
		if(a[awal]) sum--;
		akhir++; awal++;
		if(sum == k){
			sum--;
			ans++;
			a[akhir] = false;
		}
	}
	cout<<ans<<endl;
}
