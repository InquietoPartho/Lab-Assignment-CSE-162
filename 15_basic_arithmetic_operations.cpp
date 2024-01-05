#include<bits/stdc++.h>
using namespace std;
class test{
        int x=10,y=5;
        public:
            // void getdata(){
            //     cout<<"Please insert fwo numbers: ";
            //     cin>>x>>y;
            // }
            void sum(){
                cout<<"The sum of the two numbers is: "<< (x+y);
                cout<<endl;
            }
            void sub(){
                cout<<"The Sub of the two numbers: " <<(x-y) <<endl;
            }
            void mul(){
                cout<<"The multiplication of the two numbers: " <<(x*y) <<endl;
            }
            void div(){
                cout<<"The divide of the two numbers: " <<(x/y) <<endl;
            }
};
int main(){
    test t;
    t.sum();
    t.sub();
    t.mul();
    t.div();
}