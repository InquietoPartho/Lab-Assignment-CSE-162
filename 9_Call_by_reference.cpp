#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){// receive the values of x and y from the main function using reference. (&) sign are used 
                        //as reference
    int temp;
    temp = a;// swapping started
    a = b;
    b = temp;
    cout<<a<<" "<<b; // result after swapping is a = 10 and b = 5
}
int main(){
    int x = 5,y=10;
    swap(x,y);//pass the values of a snd b to the function swap with the references
}