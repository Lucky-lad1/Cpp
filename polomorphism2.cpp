//fuction overloading is a example of polomorphism 

#include<iostream>
using namespace std;
class print{
    public:
    void show(int x){
        cout<<"int"<<x<<endl;

    }
    void show(char ch){
        cout<<"char:"<<ch<<endl;

    }
};
int main(){
    print p1;
    p1.show(101);
  //  p1.show('$');
    return 0;
}