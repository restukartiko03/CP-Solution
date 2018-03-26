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

int n,a[1000100],claw,sum;

int main(){
	cin>>n;
	for(int i=n;i>=1;i--)
		scanf("%d",&a[i]);
	sum = n;
	for(int i=1;i<n;i++){
		claw = a[i];
		while(claw > 0 && i<n){
			i++;
			sum--;
			claw--;
			if(claw < a[i]) claw = a[i];
		}
	}
	cout<<sum<<endl;
}

