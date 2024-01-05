//code by Pijush Kanti Roy Partho
//prime number determine using OOP concepts
#include<bits/stdc++.h>
using namespace std;
class prime{
    int x;
    public:
        void get(){
            cout<<"Enter the value of x: ";
            cin>>x;
        }
        void check(){
            if(x%2==0){
                cout<< "YES"<<endl;
            }
            else{
                cout<< "False"<<endl;
            }
        }
};
int main(){
    prime p;
    p.get();
    p.check();
}