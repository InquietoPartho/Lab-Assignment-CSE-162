//code by Pijush Kanti Roy Partho
// Inline Functions
#include<bits/stdc++.h>
using namespace std;

inline int cube(int a){//initialize inline function
    int area  = a*a*a; // 5*5*5 = 125
    return area; // returning the total area to driver code.
}
int main(){
    int area = 5;
    cout<<"The cube of the area is: "<<cube(area)<<endl;// call the inline function and pass the value
}