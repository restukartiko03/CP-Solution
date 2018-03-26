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

ll kanan,mid,k,d,t,kpk,kiri,lol,wait,tmp,ans;

int main(){
	cin>>k>>d>>t;
	kpk = (k/d)*d + d;
	wait = kpk-k;
	kanan = 2*t;
	lol = 2*t;
	kiri = 1;
	while(kiri < kanan){
		mid = (kiri+kanan)/2;
		tmp = (mid/kpk)*2*k + (mid/kpk)*wait + (mid%kpk);
		tmp = tmp/lol;
		if(abs(tmp-1) < 0.00000001){
			cout<<mid<<endl;
			return 0;
		}
		else{
			if(tmp > 1)
				kanan = tmp-1;
			else
				kiri = tmp+1;
		}
	}
}
