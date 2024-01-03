#include<bits/stdc++.h>
using namespace std;

int x = 5; //global veriable
int main(){
    int x = 10;
    cout<<"The global value of x is "<<::x<<endl; // The Scope Resulation operator is ::, it usally we use to 
//access some data or differenent function or global declaration etc..
    cout<<"The value of x inside the main function is "<<x<<endl;
}
//output: 5 and 10;
