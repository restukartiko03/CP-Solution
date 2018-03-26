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

int n,k,mid,a[300005];

bool valid( int x){
	int sum,ambil,ada = 0,pivot = 1;
	for(i,1,n){
		sum = 0;
		ambil = 0;
		while((sum < x || ambil <k) && (i<=n) ){
			sum += a[i];
			i++;
		}
		if(ambil >= k) ada++;	
	}
	cout<<" == "<<ada<<endl;
	return ada >= 2;
}

int main(){
	cin>>n>>k;
	for(i,1,n) scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	int l = 0, r = a[n];
	while( l <= r){
		mid = (l+r)/2;
		cout<<l<<" "<<mid<<" "<<r<<endl;
		if(valid(mid)){
			if(!valid(mid+1))
				break;
			else{
				l = mid +1;
			}
		}
		else r = mid - 1;
	}
	cout<<mid<<endl;
}
