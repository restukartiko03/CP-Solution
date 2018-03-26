#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mp make_pair

int a[50001];

using namespace std;

int main(){
	for(int i=1;i<=50000;i++) a[i] = (1+i)*i/2;
	for(int i=1;i<21;i++) cout<<i<<" "<<a[i]<<endl;
}
