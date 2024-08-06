#include<iostream>
using namespace std;
int main (){
    int marks[4] = { 23,45,56,89};
    cout<<marks[1]<<endl;
     cout<<marks[2]<<endl;
      cout<<marks[3]<<endl;
       cout<<marks[4]<<endl;
for (int  i = 0; i < 4; i++)
{
    /* code */
cout<<"the value of marks "<<i<<"is"<<marks[i]<<endl;
}
// while ()
// {
// cout<<"the value of marks "<<i<<"is "<<marks[i]<<endl;

//     /* code */
// }

// pointeres in arrey 
int *p = marks;
cout <<" the value of marks [0]" <<*p<<endl;


    return 0;

}