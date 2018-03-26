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

int n,a,b,c,arr[10];

int main(){
	cin>>a>>b>>c;
	arr[a]++; arr[b]++ ;arr[c]++;
	cout<<arr[2]<<endl;
	for(int i=1;i<=1500;i++){
		arr[i]++;
		if(arr[2]) cout<<arr[2]<<" "<<i<<endl;
	}
	if(arr[1] || arr[2] >= 2 || arr[3] == 3 || (arr[4] == 2 && arr[2] == 1)) cout<<"YES"<<endl;
	else cout<<"NO"<<endl; 
}
