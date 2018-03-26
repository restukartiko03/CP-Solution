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

int n,ans,a,b,inc;
bool ada;

int main(){
	cin>>n;
	cin>>a>>b;
	while(!ada){
		int lol = b;
		while(lol > 0){
			if(lol%10 == 7)
				ada = true;	
			lol/=10;
		}
		lol = a;
		while(lol > 0){
			if(lol%10 == 7)
				ada = true;	
			lol/=10;
		}
		
		if(ada) break;
		if(b < n) {
			b += 60;
			a --;
			if(a < 0) a=23; 
		}
		ans ++;
		b -=n;
//		cout<<a<<" "<<b<<" "<<ans<<endl;
	}
	cout<<ans<<endl;
}
