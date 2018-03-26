#include<bits/stdc++.h>
using namespace std;


int n,m,sum;
string s[110];

int main(){
	int atas,bawah,kanan,kiri;
	cin>>n>>m;
	kanan = -1000;
	kiri = 1000;
	atas = 1000;
	bawah = -1000;
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j] == 'B'){
				if(j > kanan) kanan = j;
				if(j <kiri) kiri = j;
				if(i < atas) atas = i;
				if(i > bawah) bawah = i;
				sum ++;
			} 
		}
	}
//	cout<<sum<<endl;
//	cout<<atas<<" "<<bawah<<endl;
//	cout<<kanan<<" "<<kiri<<endl;
	if(kanan == -1000 || kiri == 1000 || atas == -1000 || bawah == 1000){
		cout<<"1"<<endl;
		return 0;
	}
	int panjang = max((bawah-atas),(kanan-kiri));
	panjang++;
//	cout<<panjang<<endl;
	if(panjang > n || panjang > m) cout<<"-1"<<endl;
	else{
		int ans = panjang*panjang;
		cout<<ans-sum<<endl;
	} 
}
