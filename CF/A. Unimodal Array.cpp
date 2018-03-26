#include<bits/stdc++.h>
using namespace std;

int n,a[1000],ind,x;
bool naik,turun;

int main(){
	cin>>n;
	naik = true;
	turun = true;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	x = a[1];
	ind = 2;
	while(x < a[ind] && ind <=n) {
		x = a[ind];
		ind++;
	}
	while(x == a[ind] && ind <= n){
		x = a[ind];
		ind ++;
	}
	while(x > a[ind] && ind <= n){
		x = a[ind];
		ind++;
	}
//	cout<<ind<<endl;
	if(ind <= n) turun = false;
	if(turun && naik) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
