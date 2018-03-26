#include<bits/stdc++.h>
using namespace std;

int n,x,y,ans,b,a[10];

int main(){
	cin>>n>>x>>y;
	for(int i=1;i<=n;i++){
		scanf("%d",&b);
		a[b] ++;
	}
	if(y >= a[2]) y -= a[2];
	else{
		ans += (a[2] - y)*2;
		y = 0;
	}
	if(x >= a[1]) cout<<ans<<endl;
	else{
		a[1] -= x;
		x = y*2;
		if(a[1] > x) ans+= (a[1]-x);
		cout<<ans<<endl;
	}
}
