#include<iostream>
using namespace std;
class student{
    public:
    string name;
    //constructor 1
    student(){
        cout<<"non-parameterized"<<endl;

    }
    //constructor 2
    student(string name){
        this->name=name;
        cout<<"parametrized"<<endl;

    }


};
int main(){
student s1;
return 0;
}