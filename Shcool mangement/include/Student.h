#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <Person.h>

using namespace std;

class Student:public Person
{
    private:
    string gradelevel;
    float gpa;

    public:
        Student()
        {

        }
    Studend(string gradelevel,float gpa)
    {
        this->gradelevel=gradelevel;
        this->gpa=gpa;
    }

  void setGradelevel(string gradelevel)
  {
   this->gradelevel=gradelevel;
  }
  void setGPA(float gpa)
  {
        this->gpa=gpa;
  }
  string getGradelevel()
  {
      return gradelevel;
  }
  float getGPA()
  {
      return gpa;
  }

void informations()//override
{
    Person :: informations();
    cout<<"please enter your Gradelevel:"<<endl;
      cin>>gradelevel;
      cout<<"please enter your GPA:"<<endl;
      cin>>gpa;
}
void print()
{
    Person::print();
    cout<<"the Grade level is :"<<gradelevel<<endl;
    cout<<"the GPA is :"<<gpa<<endl;
}
};

#endif // STUDENT_H
