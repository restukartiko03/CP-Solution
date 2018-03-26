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

int n,a[2001],temp,maks,pivot;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+1+n);
	for(int i=n;i>=1;i--){
		pivot = a[i];
		temp = 0;
		for(int j=i; j>=1;j--){
			if(pivot%a[j] == 0){
				pivot = a[j];
				temp++;
			}
		}
		maks = max(maks,temp);
	}
	cout<<maks<<endl;
}
