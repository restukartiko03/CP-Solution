#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	long long ans = 0;
	cin>>n>>m;
	ans = n/m;
	if(ans%2 == 1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
