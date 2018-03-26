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
#define _FAST ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define MOD 10e9+7

using namespace std;

int n,temp,cnt,xx;
vector < int > vec;

int convert ( int x){
	int temp = x;
	int cnt = 0;
	while(temp>0){
		cnt += temp%10;
		temp/=10;
	}
	return cnt;
}

int main(){
	cin>>n;
	int lol = n;
	while(lol > 0){
		xx += 9;
		lol/=9;
	}
	for(int i=n-xx; i<=n;i++){
		if((convert(i)+i) == n)
				vec.pb(i);
	}	
	if(vec.size() > 0){
		xx = vec.size();
		cout<<xx<<endl;
		for(int i=0;i<xx;i++) printf("%d\n",vec[i]);
	}
	else puts("0");
}
