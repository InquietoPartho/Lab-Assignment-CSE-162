//code by Pijush Kanti Roy Partho
// Math Library functions of c++
#include<bits/stdc++.h>
using namespace std;
void absolute(int x)
{
    cout<<"The Absolute value of is is: "<<abs(x)<<endl;
}
void square_root(int x){
    cout<<"The square root of of the value x is: "<<sqrt(x)<<endl; 
}
void cube_root(int x){
    cout<<"The cube root of of the value x is: "<<cbrt(x)<<endl; 
}
void power(int x,int y){
    cout<<"The power of x to the power y is: "<<pow(x,y)<<endl;
}
void floor_val(int x){
    cout<<"The floor of of the value x is "<<floor(x)<<endl; 
}
void ceil_val(int x){
    cout<<"The ceil of of the value x is "<<ceil(x)<<endl; 
}
int main(){
    absolute(-5);
    square_root(49);
    cube_root(27);
    power(3,2);
    floor_val(4.9);
    ceil_val(4.2);
}