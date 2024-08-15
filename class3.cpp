#include<iostream>
using namespace std;
//class 
 class person{
    public:
    string name;
    int age;
    //constructor
    person(sting name,int age){
        this->name = name;
        this-> age = age;

    }
 };
 //inherit 
 class student :public person{
    public:
    int roll;
    //function
    void getinfo(){
        cout<<"name"<<name<<endl;
        cout<<"age"<<age<<endl;
        cout<<"roll"<<roll<<endl;

    }

 }
 
int main(){
    student s1;
    s1.name = "manish";
    s1.age= 21;
    s1.roll=13;
    s1.getinfo();


}