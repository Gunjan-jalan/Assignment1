#include<iostream>
using namespace std;

int main(){
    int a , b;
     cout<<"Enter 1st vector value: ";
    cin>>a>>b;
    int c,d;
    cout<<"Enter 2nd vector value: ";
    cin>>c>>d;
    int prod = (a*b) + (c*d);
    cout<<"Dot product of "<<a<<"+ i"<<b<<" and "<<c<<"+ i"<<d<<" = "<<prod<<endl;
    cout<<"Changes Made Successfully"<<endl;
}