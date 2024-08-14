#include<iostream>
using namespace std;

class complex {
    public: // corrected 'punlic' to 'public'
    int a, b;
    
    complex(void) { // constructor definition with body
        a = 10; 
        b = 0;
    }

    void printnumber() {
        cout << "Your number is " << a << "+" << b << "i" << endl; // corrected output line
    }
};

int main() {
    complex c;
    c.printnumber();

    return 0;
}
