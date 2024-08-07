//swap two number
#include<iostream>
using namespace std;
void swappointer(int* a , int* b){
    int temp = *a;
    *a=*b;
    *b = temp;
}

int main (){
int a = 4, b = 5;
cout<<"the value of a is "<<a<<"and the vaue of b is "<<b<<endl;
swappointer(&a,&b);
cout<<"the value of a is "<<a<<"and the vaue of b is "<<b<<endl;

}