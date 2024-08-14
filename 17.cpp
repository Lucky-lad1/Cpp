#include<iostream>

using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum (int a,int b,int c){
    return a+b+c;
}

int main(){
    cout<<"the sum of 3&6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3 ,5,4"<<endl<<sum(3,4,5)<<endl;
    

}