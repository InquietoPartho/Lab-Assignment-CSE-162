//code by Pijush Kanti Roy Partho
// GPA count for student using the concept of OOP
#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        char name[50],dept[50];
        int student_ID;
        double quiz[3], midterm,final;
    public:
        void getdata(){
            cout<<"Please Enter Your name: ";
            cin.getline(name,50);
            cout<<"Please Enter Your Department name: ";
            cin.getline(dept,50);
            cout<<"Please Enter your student id: ";
            cin>>student_ID;
        }

        void quiz(double x){
            
        }
    

};
int main(){
    Student s;
    double quiz[3];
    for(int i = 0;i<3;i++){
        cin>>s.quiz();
    }
}

