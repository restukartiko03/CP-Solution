#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int n;

int main(){
	scanf("%d",&n);
	bool bol = false;
	for(int i=n;i>=1;i--){
		int temp = n-i;
		if(i<temp && __gcd(i,temp) == 1){
			printf("%d %d\n",i,temp);
			break;
		}
	}
}

