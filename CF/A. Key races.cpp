#include<bits/stdc++.h>
using namespace std;

long long a,aa,a1,b,bb,b1,n;

int main(){
	cin>>n>>a>>aa>>b>>bb;
	a1 = a*n;
	b1 = aa*n;
	a1+= 2*b;
	b1 += 2*bb;
	if(a1<b1) cout<<"First"<<endl;
	else if(b1<a1) cout<<"Second"<<endl;
	else cout<<"Friendship"<<endl;
}
