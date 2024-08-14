#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "the id of employee is " << id << "and this is employee number count" << count << endl;
    }
};
int employee::count;
int main()
{
    employee manish;
    manish.setdata();
    manish.getdata();
}