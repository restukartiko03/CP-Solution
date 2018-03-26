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

/*
.....¦_¯¯¯_¦.......
_¦¦¦¯¦?¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦__¦¦¦¦¦
¦¦¦¦¦¦¦¦¦_¯¦¦¯¯¯¯_
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¯¯_
¦¦¦¦¦¦¦¦¦_¦¦¦¦¦¦¦¦¦¦¯_
¦¦¦¦¯_¦¦¦¦¯_¦¦¦¦¦¦¦¦¦¦¯_
¦¦¦¦¦¦¯_____¦___________¯_
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦¦¦¦¦¦¦¦__¦¦_¦¦¦¦¦¦¦*/

using namespace std;

ll n,ans[1000],a[100],m;
bool cek;
int idx,x;

int main(){
	a[0] = 1;
	for(int i=1; i<= 62; i++){
		a[i] = a[i-1] * 2;
	}
	cin>>n>>m;
	ll tmp = n;
	idx = 0;
	x = 0;
	while(a[idx]*2 < n) idx++;
	ll lol = idx;
	while(tmp > 0){
		tmp -= a[idx];
		ans[idx+100]++; x++;
		while(a[idx] > tmp) idx--;
	}
//	for(int i=0; i<x; i++) cout<<ans[i]<<" ";
//	cout<<endl;	
	idx = lol;
	if(x > m){
		cout<<"No"<<endl;
		return 0;
	}
	lol += 100;
	while(x < m){
		if(ans[lol]){
			ans[lol]--;
			ans[lol-1] +=2;
			x++;
		}
		else
			lol--;
//		cout<<lol-101<<" "<<ans[lol-1]<<endl;
	}
	cout<<"Yes"<<endl;
	idx += 100;
//	cout<<idx<<endl;
	while(x){
		if(ans[idx]) {
			cout<<idx-100<<" ";x--;
			ans[idx]--;
		}
		else {
			while(!ans[idx]) idx--;
		}
	}
	cout<<endl;
}
