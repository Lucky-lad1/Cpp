// array of object 
 
#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){ 
        salary = 122;
        cout<<"enter the employee id "<<endl;
        cin>>id;



    }
    void getid(void){
        cout<<"the id of this employee is "<<id<<endl;
            }
};

int main(){
// employee manish ,sunny ,sahil, sonu;
// manish.setid();
// manish.getid();
employee fb[4];
for (int i = 0; i < 4; i++)
{
    /* code */
  
    fb[i].setid();
      fb[i].getid();
}


}