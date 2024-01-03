//code by Pijush Kanti Roy Partho
// call by value
#include<bits/stdc++.h>
using namespace std;

int test(int x){

    x +=10; // increase the value of a = 10+10;
    return x; // return the new value of a = 20
}
int main(){
    int a  = 10;

    cout<<"The value of a before modification: "<<a<<endl;

    test(a);// pass the value of a = 10 to the function test()

    cout<<"The value of a after modification: "<<test(a)<<endl;
}