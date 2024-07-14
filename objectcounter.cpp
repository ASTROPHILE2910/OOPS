#include<iostream>

class objectcounter{
    static int count;
    public:
    objectcounter(){
        count++;
    }
    ~objectcounter(){
        count--;
    }
    static int getcount(){
        return count;
    }

};
int objectcounter::count=0;
int main(){
    objectcounter obj1;
    objectcounter obj2;
    objectcounter obj3;
    std::cout<<"number of objects:"<<objectcounter::getcount()<<std::endl;
    return 0;
}