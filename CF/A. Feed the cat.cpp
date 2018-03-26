#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define p push
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pll pair< long , long >
#define pi acos(-1.0)
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define MOD 10e9+7
#define line puts("")


using namespace std;

double a, b ,h,d,c,n,A,B,tmp,tmp2;

int main(){
	cin>>a>>b;
	cin>>h>>d>>c>>n;
	tmp = ceil(h/n)*c;
	A = 20 - a;
	if(b > 0){
		A--;
		B = 60-b;
	}
	if(A >= 0)
		h = h + d*B + A*60*d;
	tmp2 = ceil(h/n)*c * 80/100;
	cout<<tmp<<" "<<tmp2<<endl;
	cout<<min(tmp,tmp2);
}
