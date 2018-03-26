#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ll long long
#define fi first
#define se second	
#define pii pair< int , int >
#define pi acos(-1.0)

using namespace std;

int n,m,temp;

int main(){
	cin>>n>>m;
	puts("YES");
	if(n == 1){
		cout<<m<<endl;
	}
	else{
		for(int i=1;i<n;i++){
			printf("%d ",i);
			if(i == 1) temp = i;
			else{
				temp = temp^i;
			}
		}
		temp = temp^m;
		cout<<temp<<endl;
	}
}
