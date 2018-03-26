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

int n,ganjil, pivot;;
char tmp;
string s;
bool bol[500];
int a[200];

int main(){
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++)
		a[s[i] - '0']++;
	for(int i='0'-'0'; i<='z'-'0';i++){
		tmp = i+'0';
		if(a[i] > 0 && a[i]%2 == 1){
			ganjil ++;
			bol[i] = true;
		}
	}
	if(ganjil > 0 && n%ganjil == 0) {
		int leng,part;
		for(part = ganjil; part <= n; part++)
			if(n%part == 0 && (n/part)%2 == 1) break;
		leng = n/part;
		//cout<<leng<<" "<<ganjil<<endl;
		for(int i='0'-'0' ; i<= 'z'-'0'; i++){
			if(bol[i]){
				pivot = i;
				string ans = "";
				ans = i+'0';
				a[i] --;
				while(ans.length() != leng){
					if(a[pivot] > 0 )	tmp = pivot+'0';
					else{
						while(a[pivot] == 0) pivot++;
						tmp = pivot + '0';
					}
					ans = tmp + ans + tmp;
					a[pivot]--;
				}
				cout<<ans<<endl;
			}
		}
	}
	else{
		for(int i=0;i<n;i++)
			cout<<s[i]<<" ";
		puts("");
	}	
}
