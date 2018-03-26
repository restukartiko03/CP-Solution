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

long long n,k,sum,nol;
string s;

int main(){
	_FAST;
	cin>>n>>k;
	cin>>s;
	int i = 0;
	for(i=0;i<s.length();i++){
		if(s[i] == '0') nol++;
	}
	if(nol == n){
		sum = n*k;
		cout<<sum<<endl;
		return 0;
	}
	i = 0;
	while(s[i] == '0' && i<s.length()){
		i++;
		sum++;
	}
	i = s.length()-1;
	while(s[i] == '0' && i>=0){	
		i--;
		sum++;
	}
	long long tmp;
	for(int i=0;i<s.length();i++){
		if(s[i] == '0'){
			tmp = 0;
			while(s[i] == '0' && i < s.length()){
				tmp++;
				i++;
			}
			sum = max(sum,tmp);
		}
	}
	cout<<sum<<endl;
}
