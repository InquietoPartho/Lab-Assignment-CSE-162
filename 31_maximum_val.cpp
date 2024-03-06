
#include<bits/stdc++.h>
using namespace std;


class ClassB;

class ClassA {
private:
    int numA; 
    friend string max(ClassA, ClassB);

    public:
    ClassA() : numA(12) {} 
};

class ClassB {
private:
    int numB; 
    friend string max(ClassA, ClassB);

    public:
    ClassB() : numB(1) {}
};

string max(ClassA objectA, ClassB objectB) {
   if(objectA.numA>objectB.numB){
    return "A is greater than B";
   }
   else{
    return "B is greater than A";
   }
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout <<max(objectA, objectB);
    return 0;
}
