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

int n,a[100005];
ll sum;

int main(){
	cin>>n;
	for(int i =1; i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	sum = a[n];
	for(int i=1;i<n;i++){
		if(a[i] >= 0 || i%2 == 0) sum += a[i];
	}
	cout<<sum<<endl;
}
