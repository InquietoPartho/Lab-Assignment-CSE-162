//code by Pijush Kanti Roy Partho
// Default Arguments
#include<bits/stdc++.h>
using namespace std;

int sum(int a,int s,int d=0,int f=0 ){
    int sum = a+s+d+f;
    return sum;
}
int main(){

    int a,b,c,d;
    cout<<"First case: "<<sum(10,20)<<endl;
    cout<<"Second case: "<<sum(10,20,30)<<endl;
    cout<<"Third case: "<<sum(10,20,30,40)<<endl;    
}