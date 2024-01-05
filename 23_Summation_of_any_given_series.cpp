//code by Pijush Kanti Roy Partho
//Factorial of a number using the concept of OOP
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;


class Factorial{
    public:
        ll sum = 0;
        int num;
    void getdata();
    void fact_function();
    void display(){
        cout<<"Factorial of the number of " << num << " is " << sum <<endl;
    }
        
};

void Factorial::getdata(){
    cout<<"Please enter a number: ";
    cin>>num;
}
void Factorial::fact_function(){
   for(int i = 1;i<=num;i++){
    sum +=i;
   }
}
int main(){
    Factorial f1;
    f1.getdata();
    f1.fact_function();
    f1.display();
    
}