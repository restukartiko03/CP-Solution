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

unsigned long long n,l,r;
unsigned long long tmp;
vector < ll > vec[1000001];
bool bol[1000001];

int main(){
	cin>>n;
	vec[1].pb(1);
	memset(bol, true, sizeof(bol));
	for(int i=2;i<=1000000;i++){
		tmp = (unsigned long long)(i);
		int idx = 0;
		while(1e18/tmp >= i){
			vec[i].pb(tmp);
			tmp *= i;
			idx++;
		}
	}
	cout<<"yes"<<endl;
	for(int i=0;i<n;i++){
		scanf("%I64d%I64d",&l,&r);
		
	}
}
