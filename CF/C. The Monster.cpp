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

int sum,b,ans,lol;
string s;

int main(){
	cin>>s;
	for(int i=0; i<s.length(); i++){
		sum = 0;
		b = 0;
		for(int j=i; j<s.length(); j++){
			if(s[j] ==')' && i == j) break;
			if(s[j] == '('){
				sum++;
			}
			else if(s[j] == ')'){
				sum--;
				if(lol > 0 && sum < 0){
					lol--;
					b++; sum++;
				}
				else{
					if(b > 0 && sum < 0){
						b--;
						sum++;
					}
				}
				if(sum < 0) break; 
			}
			else if(s[j] =='?'){
				if(i == j) sum++;
				else{
					b++;
					if(sum > 0){
						sum--;
						b--;
						lol++;
					}
				}
			} 
			if(sum == 0 && (j-i) > 0 && (j-i)%2 == 1) ans++;			
		}
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
