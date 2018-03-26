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


using namespace std;

int n,sum,l,r,m ,a[2000];

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		for(int j=i-1; j>=1; j--)
			if(a[i] < a[j]) sum ++;
	}
	sum &= 1;
	cin>>m;
	for(int i=1; i<=m; i++){
		scanf("%d%d",&l,&r);
		sum += (r-l)*(r-l+1)/2;
		sum &= 1;
		puts(sum? "odd" : "even");	
	}
}
