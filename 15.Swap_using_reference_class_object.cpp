#include<bits/stdc++.h>
using namespace std;
class test{
        public:
        int x,y;
        void swap(int &a,int &b){
            int temp;
            temp = a;
            a = b;
            b = temp;
        }
        void show(){
            cout<<"after swapping the value of x is "<< x <<" and y is "<< y <<endl;
        }
};
int main(){
    test t;
    int x = 10,y = 20;
    t.swap(x,y);
    t.show();

}