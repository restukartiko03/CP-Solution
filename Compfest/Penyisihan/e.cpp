#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define mp make_pair

int n,a[100001],maks,t;

using namespace std;

int main(){
	for(int i=1;i<=n;i++){
		int temp = a[i]-ans;
		if(i!=1 && i!=n){
			if(temp < 0 && temp > -3 ){
				if(a[i-1]-a[i] > 1){
					a[i-1] --;
					a[i]++;
					temp++;
				}
				if(temp == -1){
					if(a[i+1] - a[i] > 1){
						a[i+1] --;
						a[i++];
						temp ++;
					}
				}
			}
		}
		else if(i == 1){
			
		}
	}
}
