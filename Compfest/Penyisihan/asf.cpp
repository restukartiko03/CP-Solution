#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int n,k,a[10001],arr[10],seat[10],temp;

int main(){
	cin>>n>>k;
	for(int i=1;i<=k;i++) scanf("%d",&a[i]);
	for(int i=1;i<=k;i++){
		int temp = (a[i]/8);
		n -= temp;
		temp = a[i]%8;
		if(temp == 7) n --;
		if(temp == 1) arr[1]++;
		else if(temp == 2) arr[2]++;
		else if(temp == 3){
			arr[2]++;
			arr[1]++;
		}
		else if(temp == 4) arr[4] ++;
		else if(temp == 5){
			arr[1]++;
			arr[4]++;
		}
		else if(temp == 6){
			arr[2] ++;
			arr[4]++;
		}
		else arr[8]++;
	}
//	cout<<n<<endl;
//	cout<<arr[1]<<" "<<arr[2]<<" "<<arr[4]<<endl;
	if(n < 0 || (n == 0 && (arr[1] || arr[2] || arr[4]))){
		puts("NO");
		return 0;
	}
	seat[2] = n*2;
	seat[4] = n;
//	cout<<seat[2]<<" "<<seat[4]<<endl;
	if(seat[2] >= arr[2]){
		seat[2] -= arr[2];
		arr[2] = 0;
	}
	else{
		arr[2] -= seat[2];
		seat[2] = 0;
	}
	if(seat[4] >= arr[4]){
		seat[4] -= arr[4];
		arr[4] = 0;
	}
	else{
		arr[4] -= seat[4];
		seat[4] = 0;
	}
//	cout<<"arr "<<arr[2]<<" "<<arr[4]<<endl;
//	cout<<"seat "<<seat[2]<<" "<<seat[4]<<endl;
	if(seat[4] && seat[2]){
		seat[1] = (2*seat[4]+seat[2]);
		puts((seat[1] >= arr[1]) ? "YES" : "NO");
	}
	else if(seat[4]){
		seat[2] += seat[4];
		seat[1] += seat[4];
		puts((seat[2] >= arr[2] && seat[1] >= arr[1])? "YES" : "NO"); 
	}
	else if(seat[2]){
		arr[2] += arr[4]*2;
		arr[2] += arr[1];
		puts((seat[2] >= arr[2])? "YES" : "NO");
	}
	else puts((arr[1] || arr[2] || arr[4])? "NO" : "YES");
}
