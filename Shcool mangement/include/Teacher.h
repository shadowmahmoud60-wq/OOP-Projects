#ifndef TEACHAR_H
#define TEACHAR_H
#include<iostream>
#include<Person.h>
using namespace std;


class Teachar: public Person
{
private:

    string sub;
    float salary;

    public:
        Teacher()
        {

        }
        Teacher( string sub,float salary)
        {
            this->sub=sub;
            this->salary=salary;
        }
        void setSub(string sub)
        {
             this->sub=sub;
        }
        void setSalary(float salary)
        {
          this->salary=salary;
        }
        string getSub()
        {
            return sub;
        }
        float getSalary()
        {
            return salary;
        }

     void informations ()
     {
         Person :: informations();
            cout<<"please enter your Sub:"<<endl;
      cin>>sub;
      cout<<"please enter your Salary:"<<endl;
      cin>>salary;
}
        void print ()
        {
        Person :: print();
        cout<<"the Sub is :"<<sub<<endl;
    cout<<"the Salary is :"<<salary<<endl;
        }

};

#endif // TEACHAR_H
