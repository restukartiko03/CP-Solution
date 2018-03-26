#include <bits/stdc++.h>

using namespace std;
int n,k;
int main(){
    cin>>n>>k;
    int x,maxx=0;
    for (int i=0; i<n; i++){
        cin>>x;
        if (k%x==0) maxx=max(maxx,x);
    }
    cout<<k/maxx;
    return 0;
}
