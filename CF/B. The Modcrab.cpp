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

int a,b,c,x,y;
string s1,s2;
vector < string > vec;

int main(){
	s1 = "STRIKE";
	s2 = "HEAL";
	cin>>a>>b>>c;
	cin>>x>>y;
	while(x > 0){
		if(a <= y && x > b){
			vec.pb(s2);
			a += c;
		}
		else{
			vec.pb(s1);
			x -= b;
		}
		a -= y;
	}
	cout<<vec.size()<<endl;
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<endl;
	}
}
