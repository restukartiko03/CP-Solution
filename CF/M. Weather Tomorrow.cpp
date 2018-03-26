#include<bits/stdc++.h>
using namespace std;

int n,a[110],temp,now;
bool bol;

int main(){
	cin>>n;
	bol = true;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(i == 2){
			now = a[i] - a[i-1];
		}
		else if(i > 2){
			temp = a[i] - a[i-1];
			if(temp != now) bol = false;
			else{
				now = temp;
			}
		}
	}
	if(bol) cout<<a[n]+now<<endl;
	else cout<<a[n]<<endl;
}
