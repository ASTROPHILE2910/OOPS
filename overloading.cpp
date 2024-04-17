#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float,float);
int main(){
    int r,l,br;
    float b,h;
    cout<<"enter radius:";
    cin>>r;
    cout<<"enter length:";
    cin>>l;
    cout<<"enter bredth:";
    cin>>br;
    cout<<"enter base:";
    cin>>b;
    cout<<"enter height:";
    cin>>h;
    cout<<"\narea of circle is:"<<area(r);
    cout<<"\narea of rectangle is:"<<area(l,br);
    cout<<"\narea of triangle is:"<<area(b,h);
    
}
float area(int r){
    return (3.14*r*r);
}
int area(int l,int br){
    return (l*br);
}
float area(float b,float h){
    return (0.5*b*h);
}
