#include<iostream>
using namespace std;
class Distance{
    public:
    int feet;
    int inches;
    Distance(int f,int i){
        this->feet=f;
        this->inches=i;
    }
    void operator-(){
        feet--;
        inches--;
        cout<<"feet and inches:"<<feet<<"'"<<inches;
    }
};
int main(){
    Distance d1(8,9);
    -d1;
    return 0;

}