//code by Pijush Kanti Roy Partho
//static data function
#include<bits/stdc++.h>
using namespace std;
class test{
    public:
        static void show(){
            cout<<"I am Static Data Function......";
        }
};
int main(){
    test::show();
}