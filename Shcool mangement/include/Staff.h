#ifndef STAFF_H
#define STAFF_H
#include<iostream>
#include<Person.h>
using namespace std;

class Staff : public Person
{
   private:
      string role;
      float salary;

       public:
           Staff()
           {

           }
           Staff(string role , float salary)
           {
               this->role=role;
               this->salary=salary;
           }
           void setRole(string role)
           {
               this->role=role;
           }
           void setSalary(float salary)
           {
                this->salary=salary;
           }
           string getRole()
           {
               return role;
           }
           float getSalary()
           {
               return  salary;
           }

   void informations()
   {
       Person::informations();
       cout<<"please enter your Role:"<<endl;
       cin>>role;
       cout<<"please enter your Salary:"<<endl;
      cin>>salary;

   }

    void print ()
    {
        Person::print();
         cout<<"the Role is :"<<role<<endl;
    cout<<"the Salary is :"<<salary<<endl;
    }
};

#endif // STAFF_H
