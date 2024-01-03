#include<bits/stdc++.h>
using namespace std;

int main(){
   int x;
   cin>>x;

   cout<<x<<endl;//before the reference, x = 10
   int &ref =x; //ref variable refers the pointer to x; now x = ref
   ref = 20; // after reference the value of x has been changed to f; now x = 20;
   cout<<x<<endl;// x = 20

}