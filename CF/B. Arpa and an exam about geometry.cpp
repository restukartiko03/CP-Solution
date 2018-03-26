#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

long long jarak( long long  x, long long y, long long xx, long long yy){
	long long lol = (x-xx)*(x-xx) + (y-yy)*(y-yy); 
	return (lol);
}

int main(){
	long long ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	if(jarak(ax,ay,bx,by) == jarak(bx,by,cx,cy) && (ax-bx)*(by-cy) != (bx-cx)*(ay-by)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl; 
}
