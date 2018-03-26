#include<bits/stdc++.h>
using namespace std;

int n,x,y,ans,b,temp;

int main(){
	cin>>n>>x>>y;
	for(int i=1;i<=n;i++){
		scanf("%d",&b);
		if(b==1)x? x-- : y? y--,temp++:temp?temp--:ans++;
		else y? y-- : ans+=2; 
	}
	cout<<ans<<endl;
}
