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

int n,x,tmp,y,xx,yy,ans;
bool no;

int main(){
	cin>>n>>x>>y;
	while(1){
		tmp = n-xx*x;
		yy = tmp/y;
		ans = xx*x + yy*y;
		if(ans == n){
			break;
		}
		else if(ans < n){
			xx++;
		}
		else{
			no = true;
			break;
		}
	}
	if(no){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
		cout<<xx<<" "<<yy<<endl;
	}
}
