#include<bits/stdc++.h>
using namespace std;
class numrev{
        int i,n;
        friend void reverse(numrev n);

        public:
            void getdata(int num){
                n = num;
            }
};

void reverse(numrev r){
    int i,rem;
    while(r.n>0){
        rem = r.n%10;
        cout<<rem<<" ";
        r.n = r.n/10;
    }
}
int main(){
    numrev r;
    r.getdata(1234);
    reverse(r);
}