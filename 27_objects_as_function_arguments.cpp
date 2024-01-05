//code by Pijush Kanti Roy Partho
//
#include<bits/stdc++.h>
using namespace std;
class time{
    int hour,minutes;
    public:
        void getdata(int h,int m){
            hour = h;
            minutes = m;
        }
        void display(void){
            cout<< hour << " hours and ";
            cout<< minutes << " minutes " <<endl;
        }

        void total(time,time);
};

void time::total(time t1,time t2){
    minutes = t1.minutes+t2.minutes;
    hour = minutes/60;
    minutes = minutes%60;
    hour = hour + t1.hour+t2.hour;
}
int main(){
    time T1,T2,T3;
    T1.getdata(2,45);
    T2.getdata(3,30);

    T3.total(T1,T2);
    cout<< "T1 = ";
    T1.display();
    cout<< "T2 = ";
    T2.display();
    cout<< "T3 = ";
    T3.display();
}