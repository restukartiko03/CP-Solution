#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int n,a[1000],sum,x,k,ans;

int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		if(a[i] >= 8){	
			sum += 8;
			if(i!=n) a[i+1] += a[i]-8;
		}
		else sum += a[i];
		x++;
		if(sum >= k){
			ans = x;
			break;
		}
	}
	if(sum >= k)cout<<ans<<endl;
	else puts("-1");
}
