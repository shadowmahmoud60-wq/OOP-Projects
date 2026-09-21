#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person
{
private:
        string name;
        int age;
        string gender ;
        string address;
        string phoneNumber;
        string email;
        int id ;

public:
    person ()
    {

    }
person (string name, int age, string gender, string address, string phoneNumber, string email, int id)
{
    this->name=name;
    this->age=age;
    this->gender=gender;
    this->address=address;
    this->phoneNumber=phoneNumber;
    this->email=email;
    this->id=id;
}

void setName(string name)
{
     this->name=name;
}
void setAge(int age)
{
     this->age=age;
}
void setGender(string gender)
{
  this->gender=gender;
}
void setAddress(string addrees)
{
      this->address=address;
}
void setPhoneNumber(string phoneNumber)
{
     this->phoneNumber=phoneNumber;
}
void setEmail(string email)
{
     this->email=email;
}
void setId(int id)
{
    this->id=id;
}
string getName()
{
return name;
}
int getAge()
{
    return age;
}
string getGender()
{
    return gender;
}
string getAddress()
{
    return address;
}
string getPhoneNumber()
{
    return phoneNumber;
}
string getEmail()
{
return email;
}
int getId()
{
    return id;
}
void informations()
{
    cout<<"please enter you Name:"<<endl;
    cin>>name;
      cout<<"please enter you Age:"<<endl;
       cin>>age;
        cout<<"please enter you Gender:"<<endl;
       cin>>gender;
      cout<<"please enter you Address:"<<endl;
       cin>>address;
     cout<<"please enter you PhoneNumber:"<<endl;
    cin>>phoneNumber;
     cout<<"please enter you Email:"<<endl;
    cin>>email;
     cout<<"please enter you Id:"<<endl;
       cin>>id;
}
void print()
{
  cout<<"the Name is :"<<name<<endl;
    cout<<"the Age is :"<<age<<endl;
     cout<<"the Gender is :"<<gender<<endl;
     cout<<"the Address is :"<<address<<endl;
     cout<<"the PhoneNumber is :"<<phoneNumber<<endl;
      cout<<"the Email is :"<<email<<endl;
      cout<<"the Id is :"<<id<<endl;

   }
};

#endif // PERSON_H
