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

int n,maks,ans,a[100010];

int main(){
	cin>>n;
	maks = -9999;
	for(i,1,n)
		scanf("%d",&a[i]);
	for(i,2,n){
		int j = i-1;
		ans = 0;
		while(j > 0 && a[i-1] == a[j]){
			ans++;
			j--;
		}
	//	cout<<ans<<" "<<i<<endl;
		if(a[i] >= a[i-1] ){
			while(a[i] >= a[i-1] && i<= n){
				i++;
				ans++;
			}
		}
		else{
			while(i <= n && a[i] <= a[i-1]){
				i++;
				ans++;
			}
		}
		i--;
		//cout<<ans<<" "<<i<<endl;
		maks = max(maks,ans);
	}
	cout<<maks<<endl;
}
