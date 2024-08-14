
// lecture 27 
#include<iostream>
using namespace std;
class complex;
class calculator(){
    public:
    void add(int a , int b){
        return (a+b);

    }
    int sumrealcomplex(complex 01,complexo2){
        return (o1.a+ o2.a);
    }
};
class complex{
    int a , b;
    friend int calculator :: sumrealcomplex(complex 01 ,  complex o2);
     public:
     void setnumber( int n1,int n2){
        a = n1;
        b= n2;


     }
     void printnumber(){
        cout<<"your number is "<<a<<"+"<<b<<"i";


     }
};

int main (){

}