//code by Pijush Kanti Roy Partho..
// memory management program using new and delete operator. 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[5];//Initialize a 7 size dynamic array

    for(int i=0;i<5;i++)
    {
        cin>>a[i];// input the values of the array a from user 
    }
    int *b = new int[7]; // create a new dynamic array of 7 sizes
    for(int i=0;i<5;i++)
    {
        b[i] = a[i];// input the values of the array b from user where a[] = b[];
    }
    b[5] = 10; // also input two values of b[]
    b[6] = 20;

    for(int i=0;i<7;i++){
        cout<<b[i]<<" "; // output the new array after input
    }
    cout<<endl;
    delete[] a; // delete the previous array of a using delete operator
    for(int i=0;i<5;i++){
        cout<<a[i]<< " "; //try to access the array of a but it couldn't accessible because I already delete the array a;
    }
    return 0;
}