#include<bits/stdc++.h>
using namespace std;

int n,sum,temp;
string s;

int main(){
	cin>>n;
	cin>>s;
	for(int i=0;i<s.length();i++)
		sum += s[i]-'0';
	if(sum >= n) cout<<"0"<<endl;
	else{
		//cout<<"hai"<<endl;
		temp = n-sum;
		sort(s.begin(),s.end());
		int i = 0;
		while(temp > 0 && i<s.length()){
			temp -= 9-(s[i]-'0');
			i++;
		}
		cout<<i<<endl;
	}
}
