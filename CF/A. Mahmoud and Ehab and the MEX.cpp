#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)

using namespace std;

int n,x,k,ans;

int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		if(x < k) ans ++;
		if(x == k) ans--;
	}
	cout<<abs(k-ans)<<endl;
}
