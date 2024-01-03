//code by Pijush Kanti Roy Partho
//Function overloadin in C++
#include<bits/stdc++.h>
using namespace std;

void show(int x){
    cout<<"The value of integer a is: "<<x<<endl;
}
void show(double y){
    cout<<"The value of double b is: "<<y<<endl;
}
void show(int x,double y){
    cout<<"The value of integer a is: "<<x<<endl;
    cout<<"The value of double b is: "<<y<<endl;
}
int main(){
    int a = 2;
    double b = 3.5;
    show(a);
    show(b);
    show(a,b);
    
}