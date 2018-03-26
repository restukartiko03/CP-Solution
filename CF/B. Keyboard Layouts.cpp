#include<bits/stdc++.h>
using namespace std;

string quest,s,s1,x;

int main(){
	cin>>s;
	cin>>s1;
	cin>>quest;
	for(int i=0;i<quest.length();i++){
		if(quest[i] >= 'A' && quest[i] <= 'Z') x += tolower(quest[i]);
		else x += quest[i];
	}
	for(int i=0;i<x.length();i++){
		bool bol = true;
		for(int ii=0;ii<26;ii++){
			if(s[ii] == x[i]){
				x[i] = s1[ii];	
				bol = false;
				break;
			}
		}
	}
	for(int i=0;i<x.length();i++){
		if(quest[i] > 'z' || quest[i] < 'a'){
			if(quest[i] >= 'A' && quest[i] <= 'Z')
				x[i] = x[i] -'a'+'A';
		}
	}
	cout<<x<<endl;
}
