//code by Pijush Kanti Roy Partho
// Student records by help of class and objects
#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
        string name, dept;
        int student_ID;
    public: 
        void getdata();
        void show();
};
void Student::getdata(){
    cout<<"Please Enter Your name: ";
    cin>>name;
    cout<<"Please Enter Your Department name: ";
    cin>>dept;
    cout<<"Please Enter your student id: ";
    cin>>student_ID;
}
void Student::show(){
    cout<<"Your Name is " << name <<endl;
    cout<<"Your are from " << dept << " department" <<endl;
    cout<<"Your Student ID is " << student_ID << endl; 
}
int main(){
    Student s1;
    s1.getdata();
    s1.show();
}