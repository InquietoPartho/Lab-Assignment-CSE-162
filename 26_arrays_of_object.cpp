//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;
class test{
    char name[30];
    float age;

    public:
        void getdata(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Age: ";
            cin>>age;
        }
        void show(){
            cout<<"Name: "<< name<<endl;
            cout<<"Age: "<< age<<endl;
        }
};

const int size = 3;
int main(){
    test add[size];

    for(int i = 0;i<size;i++){
        cout<<"-----------------Details-----------------"<<endl;
        cout<<"Test"<< i+1 <<endl;
        add[i].getdata();
    }
    cout<<endl;
    for(int i = 0;i<size;i++){
        cout<<"------------------LIST--------------------"<<endl;
        cout<<"List"<<i+1<<endl;
        add[i].show();
    }
}