#include<bits/stdc++.h>
using namespace std;
class test{
        public:
        int a;

        test example(test x,test y){
            test z;
            z.a = x.a+y.a;
            return z;
        }
};
int main(){
    
    test t1,t2,t3;
    t1.a = 10;
    t2.a = 20;
    t3.a  = 30;

    cout<<"-------------The Initial values-------------";
    cout<<endl<<endl;
    cout<<"The value of x: "<<t1.a<<endl;
    cout<<"The value of y: "<<t2.a<<endl;
    cout<<"The value of z: "<<t3.a<<endl;
    cout<<"--------------------------------------------";
    cout<<endl;
    t3 = t3.example(t1,t2);
    cout<<"-------------The Final values-------------";
    cout<<endl<<endl;
    cout<<"The value of x: "<<t1.a<<endl;
    cout<<"The value of y: "<<t2.a<<endl;
    cout<<"The value of z: "<<t3.a<<endl;
    cout<<"--------------------------------------------";

    
}