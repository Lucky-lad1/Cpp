#include<iostream>
using namespace std;
#include<string>

class student {
    public:
    string name;
    double cgpa;
    
    student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
    }

    void getinfo() {
        cout << "name: " << name << endl;
        cout << "cgpa: " << cgpa << endl;
    }
};

int main() { // Corrected from man() to main()
    student s1("rahul kumar", 8.9);
    //s1.getinfo(); // Corrected from s1.fetinfo() to s1.getinfo()
   student s2(s1);
    s2.getinfo();

    return 0; // Added return statement
}
