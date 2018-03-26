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

int tmp,tmp2,cnt,a[100];
string s;

int main(){
	cin>>s;
	for(int i=0;i<s.length();i++){
		if(!a[s[i]-'a']) tmp++;
		a[s[i]-'a']++;
	}
	sort(s.begin(), s.end());
	for(int i=0;i<s.length();i++){
		char lol = s[i];
		cnt = 0;
		while(i<s.length() && s[i] == lol) {
			i++;	
			cnt++;
		}
		i--;
		if(cnt > 1) tmp2++;
	}
//	cout<<tmp<<" "<<tmp2<<endl;
	if(tmp == 4)
		cout<<"Yes"<<endl;
	else if(tmp == 2 && tmp2 ==2){
		cout<<"Yes"<<endl;
	}
	else if(tmp == 3 && tmp2 == 2){
		cout<<"Yes"<<endl;
	}
	else if(tmp == 3 && tmp2 == 3)
		cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
