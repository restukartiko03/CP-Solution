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

int n,a[19];


int main(){
	cin>>n;
	for(int i=0;i<=10;i++){
		int lol = (pow(2,i)-1)*pow(2,i-1);
		a[i] = lol;
		//cout<<a[i]<<endl;
	}
	for(int i=n;i>=1;i--){
		for(int j=0;j<=10;j++){
			if(i == a[j] && n%i == 0){
				printf("%d\n",a[j]);
				return 0;
			}
		}
	}

}
