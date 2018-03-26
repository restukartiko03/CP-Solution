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

int n,differ,ans,x,sum,b[1000];

int main(){
	cin>>n;
	ans = 1000000000;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		b[i] = b[i-1]+x;
		sum += x;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			differ = abs(sum - 2*(b[j]-b[i-1]));
			//cout<<differ<<endl;
			if(differ < ans ) ans = differ;
		}
	}
	cout<<ans<<endl;
}
