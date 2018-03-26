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
#define for(i,x,n) for(int i=1;i<=n;i+=x)

using namespace std;

int n,a[100001];

int main(){
	cin>>n;
	for(i,1,n){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
	}
	sort(a+1,a+1+n);
	l = 1; r = n;
	while(true){
		c = min(cnt[a[l]],cnt[a[r]]);
	}
}
