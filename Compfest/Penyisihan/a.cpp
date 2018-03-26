#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;

long long n,t,m,sum,a;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>m;
		sum = 0;
		while(n--){
			for(int i=1;i<=m;i++){
				scanf("%d",&a);
				sum += a;
			}
		}
		cout<<sum<<endl;
	}
}
