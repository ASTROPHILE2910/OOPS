#include<iostream>
using namespace std;
int area(int);
int area(int ,int );
float area(float ,float );
int main(){
    int r,l,b;
    float bs,ht;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"\narea of circle:"<<3.14*r*r<<endl;
    cout<<"enter length:"<<endl;
    cin>>l;
    cout<<"enter breadth:"<<endl;
    cin>>b;
    cout<<"area of rectangle:"<<l*b;
    cout<<"enter base:"<<endl;
    cin>>bs;
    cout<<"enter height:"<<endl;
    cin>>ht;
    cout<<"area of triangle:"<<(bs*ht)/2<<endl;
    return 0;



}