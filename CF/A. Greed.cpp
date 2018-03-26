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

long long n,a[100010],b[100010];

long long x,sum,maks, maks2,tmp,temp;
vector < pair < long long , long long > > vec;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum += a[i];
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	sort(b,b+n);
	maks = b[n-1]+b[n-2];
	if(maks >= sum) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

