#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eid;
    char favchar;
    float slary;

};

int main(){
struct employee manish;
manish.eid = 1;
manish.favchar='c';
manish.slary=120000;
cout<<manish.slary <<endl;
cout<<manish.eid<<endl;
cout<<manish.favchar<<endl;

}