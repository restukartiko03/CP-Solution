#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	if(c <= b) cout<<c<<endl;
	else if(c <= 2*b && b*2<=a) cout<<b<<endl;
	else if(c<=a) cout<<b<<endl;
	else cout<<b-(c-a)<<endl;	 

}
