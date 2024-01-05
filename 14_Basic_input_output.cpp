//code by Pijush Kanti Roy Partho
// Basic Input-Output operation using class and objects;
#include<bits/stdc++.h>
using namespace std;
class tests{
    int x = 10;
    public:
    void display(){
        cout<<"The vaule of X is: "<<x<<endl;
    }
};
int main(){
    tests t;
    t.display();
}