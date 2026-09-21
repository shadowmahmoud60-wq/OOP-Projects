#ifndef CLASSROOM_H
#define CLASSROOM_H
#include<iostream>

using namespace std;

class ClassRoom
{
    private:

       int roomNumber;
       int capacity ;

    public:
        ClassRoom()
        {

        }
        ClassRoom(int roomNumber, int capacity )
        {
            this->roomNumber=roomNumber;
            this->capacity=capacity;
        }

        void setRoomNumber(int roomNumber)
        {
            this->roomNumber=roomNumber;
        }
        void setCapacity(int capacity)
        {
           this->capacity=capacity;
        }
        int getRoomNumber()
        {
            return roomNumber;
        }
        int getCapacity()
        {
            return capacity;
        }
        void informations()
  {

      cout<<"please enter your RoomNumber:"<<endl;
      cin>>roomNumber;
       cout<<"please enter your Capacity:"<<endl;
      cin>>capacity;
  }

    void print()
    {

          cout<<"the RoomNumber is :"<<roomNumber<<endl;
    cout<<"the Capacity is :"<<capacity<<endl;

    }
};

#endif // CLASSROOM_H
