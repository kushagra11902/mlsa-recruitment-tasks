#include <bits/stdc++.h>
using namespace std;

int main(){

int x, y, z;
cin>>x>>y>>z;

for(int i=y;i<=(y+z);i++) {
    if(i%x==0) {
        cout<<"YES"<<endl;
        return 0;
    }
}

cout<<"NO"<<endl;
return 0;
}

