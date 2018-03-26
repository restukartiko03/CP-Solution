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

int l,r,n,a[100100];
string s;

int main(){
	cin>>n;
	l = -1000000001;
	r = 1000000001;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	cin>>s;
	for(int i=4;i<n;i++){
		if(s[i] == '1' && s[i] != s[i-1]){
			for(int j=i-4;j<=i;j++)
				l = max(l,a[j]);
			i++;
			while(s[i] == '1' && i < n){
				i++;
			}
			i--;
		}
		else if(s[i] == '0' && s[i] != s[i-1]){
			for(int j=i-4;j<=i;j++)
				r = min(r,a[j]);
			i++;
			while(s[i] == '0' && i < n){
				i++;
			}
			i--;
		}
	}
	cout<<l+1<<" "<<r-1<<endl;
}
