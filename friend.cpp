#include<iostream>
using namespace std;
class myclass{
    private:
    int num1,num2;
    friend int addtwoprivatemembers(const myclass&obj);
    public:
    myclass(int a,int b){
        num1=a;
        num2=b;
    }
    void display(){
    std::cout<<"num1:"<<num1<<"num2:"<<num2<<std::endl;
    }

};
int addtwoprivatemembers(const myclass&obj){
    return obj.num1+obj.num2;
}
int main(){
    myclass obj(5,2);
    std::cout<<"numbers before addition:"<<std::endl;
    obj.display();
    int sum=addtwoprivatemembers(obj);
    std::cout<<"sum:"<<sum<<std::endl;
    return 0;
}