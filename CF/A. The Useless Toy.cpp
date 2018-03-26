#include<bits/stdc++.h>
using namespace std;

char s,ss;
long long n;

int main(){
	cin>>s>>ss;
	cin>>n;
	if(s == '^' && ss == '>'){
		if(n%4 == 1) cout<<"cw"<<endl;
		else if(n%4 == 3) cout<<"ccw"<<endl;
	}
	else if(s == '^' && ss == 'v'){
		cout<<"undefined"<<endl;
	}
	else if(s == '^' && ss == '<'){
		if(n%4 == 1) cout<<"ccw"<<endl;
		else if(n%4 == 3) cout<<"cw"<<endl;
	}
	else if(s == '^' && ss == '^'){
		if(n%4 == 0) cout<<"undefined"<<endl;
	}
	else if(s == '>' && ss == 'v'){
		if(n%4 == 1) cout<<"cw"<<endl;
		else if(n%4 == 3) cout<<"ccw"<<endl;
	}
	else if(s == '>' && ss == '<'){
		cout<<"undefined"<<endl;
	}
	else if(s == '>' && ss == '^'){
		if(n%4 == 3) cout<<"cw"<<endl;
		else if(n%4 == 1) cout<<"ccw"<<endl;
	}
	else if(s == '>' && ss =='>'){
		cout<<"undefined"<<endl;
	}
	else if(s == 'v' && ss == '<'){
		if(n%4 == 1) cout<<"cw"<<endl;
		else if(n%4 == 3) cout<<"ccw"<<endl;
	}
	else if(s == 'v' && ss == '^'){
		cout<<"undefined"<<endl;
	}
	else if(s == 'v' && ss == '>'){
		if(n%4 == 3) cout<<"cw"<<endl;
		else if(n%4 == 1) cout<<"ccw"<<endl;
	}
	else if(s == 'v' && ss =='v'){
		cout<<"undefined"<<endl;
	}
	else if(s == '<' && ss == '^'){
		if(n%4 == 1) cout<<"cw"<<endl;
		else if(n%4 == 3) cout<<"ccw"<<endl;
	}
	else if(s == '<' && ss == '>'){
		cout<<"undefined"<<endl;
	}
	else if(s == '<' && ss == 'v'){
		if(n%4 == 3) cout<<"cw"<<endl;
		else if(n%4 == 1) cout<<"ccw"<<endl;
	}
	else if(s == '<' && ss =='<'){
		cout<<"undefined"<<endl;
	}
}
