#include<iostream>
using namespace std;
int main(){
    int P,R,T,SI;
    cout<<"enter principle:";
    cin>>P;
    cout<<"enter rate:";
    cin>>R;
    cout<<"enter time:";
    cin>>T;
    SI=(P*R*T)/100;
    cout<<"simple interest is:"<<SI;
    return 0;

}