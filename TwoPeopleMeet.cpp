#include<iostream>
using namespace std;

int main(){
    int x1,v1,x2,v2; cin>>x1>>v1>>x2>>v2;
    if(x1>x2){swap(x1,x2); swap(v1,v2);}
    if(x1<=x2 && v1<=v2) {cout<<"No"; return 0;}
    else{
        int X=x2-x1, V=abs(v2-v1);
        if(X%V==0) {cout<<"Yes"; return 0;}
        else cout<<"No";
    }
    return 0;
}