#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
int age;
string phonenumber;
string name;
string address;
Student(int a,string p,string n,string addr){
    age=a;
    phonenumber=p;
    name=n;
    address=addr;
}
void displaybiodata(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Phone Number:"<<phonenumber<<endl;
    cout<<"Address:"<<address<<endl;
}
};
int main(){
    Student student1(19,"999-999-999","Anandita","Borsi");
    Student student2(21,"888-888-888","Krithika","Hudco");
    cout<<"Biodata of student 1:"<<endl;
    student1.displaybiodata();
    cout<<"Biodata of student 2:"<<endl;
    student2.displaybiodata();
    return 0;

}