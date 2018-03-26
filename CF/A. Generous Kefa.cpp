#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int n,m,arr[50];
string s;
bool bol;
int main(){
	cin>>n>>m;
	cin>>s;
	for(int i=0;i<n;i++){
		arr[s[i]-'a']++;
		if(arr[s[i]-'a'] > m) bol = true;
	}
	bol? puts("NO") : puts("YES");
}
