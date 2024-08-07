#include<iostream>
using namespace std;
int product( int a , int b){
    return a*b;
}
int main(){
 int a , b;
   cout<<"enter the vakue of a and b";
   cin>>a>>b;
   cout<<"the product of a and b is "<<product(a,b);
}