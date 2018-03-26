#include<bits/stdc++.h>
#define mp make_pair
#define pb push
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

int n,m,a[200100],x,y;
stack < int > st;
bool ans = 1;

int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++) scanf("%d",&a[i]);
	int kiri = 1;
	for(int i=1;i<=m;i++){
		st.pb(a[i]);
		while(!st.empty() && st.top() == kiri ){
			st.pop();
			kiri ++;
		}
		//cout<<st.top()<<endl;		
		int sign = 0;
		if(!st.empty()){
			x = st.top();
			st.pop();
			sign++;
		}
		//cout<<"x = "<<x<<endl;
		if(!st.empty()){
			y = st.top();
			st.pop();
			sign++;
		//	cout<<"y = "<<y<<endl;
		}
		else{
			if(sign == 1){
				st.pb(x);
				sign--;
			}
		}		
		if(sign == 2){
			if(x > y){
				ans = false;
				break;
			}
			else{
				st.pb(y); st.pb(x);
			}
		}
	}
	if(!ans) cout<<"-1"<<endl;
	else{
		for(int i=1;i<=m;i++) cout<<a[i]<<" ";
		while(!st.empty()){
			x = st.top();
			st.pop();
			for(int i=x-1;i>=kiri;i--){
				printf("%d ",i);
				m++;
			}
			kiri = x+1;
		}
		for(int i=n; i>kiri; i--){
			if(m+1 < n)printf("%d ",i);
			else printf("%d\n",i);		
			m++;
		}
		if(m < n)cout<<kiri<<endl;
	}
}
