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
#define for(i,x,n) for(int i=x;i<=n;i++)
#define line puts("")


using namespace std;

int n,lis[100005],a[100005],awal[100005],akhir[100005];

int main(){
	cin>>n;
	scanf("%d",&a[1]);
	lis[1] = 1;
	int maks = lis[1];
	awal[1] = a[1]; akhir[1] = a[1];
	for(i,2,n){
		scanf("%d",&a[i]);
		if(a[i] != a[i-1]+1){
			lis[i] = 1;
			
		}
		else lis[i] = lis[i-1]+1;
		//cout<<lis[i]<<endl;
		maks = max(maks,lis[i]);
	}
	cout<<maks+1<<endl;
}
