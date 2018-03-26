#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll ans,a,b,c[1000100],x,p;

int main(){
	cin>>a>>b>>p>>x;
	c[0] = 1;
	for(int i=1;i<p;i++){
		c[i] = (c[i-1]*a) % p;
		if(c[i] < 0) c[i] += p;
	}
	if(p == 2)
		cout<< (x+1)/2<<endl;
	else{
		for( int i=1;i<p;i++){
			ll tmp = (i * p + c[p-1-i] * b * (1-p)) % (p* (p-1));
			if( tmp < 0) tmp += p* (p-1);
			if(tmp > 0 && tmp <= x) ans ++;
			ll lol = (x-tmp)/(p*(p-1));
			if(lol > 0)ans += lol;
		}
		cout<<ans<<endl;
	}
}
