#include<iostream>
using namespace std;
class teacher{
    public:
    teacher(){
        cout<<"hi i am constructor \n";
        dept = "computer science";
    }
    string name;
    string dept;
    
    string subject;
    double salary;
void changedpt(string newdept){
    dept = newdept;
}
};

int main(){
    teacher t1;
    teacher t2;

    t1.name = "manish";
    t1.subject = "computer science "; // Assign a value to t1.subject
    t1.salary = 25000;

    cout << t1.name << endl;
    cout << t1.salary << endl;
    cout << t1.subject << endl; // Now this will print "computer science"
}
