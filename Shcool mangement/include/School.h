#ifndef SCHOOL_H
#define SCHOOL_H
#include<iostream>
#include<Person.h>
#include<Student.h>
#include<Teacher.h>
#include<Staff.h>
#include<Course.h>
#include<ClassRoom.h>
#include<Exam.h>

class School
{
private:
   string schoolName;
   string address;
   string principaName;
  Student students[1000];
  Teachar teachars[100];
  Staff  staffs[50];
  Course  courses[5];
  ClassRoom classRooms[50];
int StudentCounter=0;
int TeacharCounter=0;
int StaffCounter=0;
int CourseCounter=0;
int ClassRoomCounter=0;
    public:

   void addStudent()
   {
     students [StudentCounter].informations();
     StudentCounter++;
   }
   void addTeachar()
 {
   teachars [TeacharCounter].informations();
   TeacharCounter++;
 }
   void addStaff()
   {
       staffs [StaffCounter].informations();
       StaffCounter++;
   }
 void addCourse()
 {
    courses [CourseCounter]. informations();
    CourseCounter++;
 }

 void addClassRoom()
 {
     classRooms [ClassRoomCounter]. informations();
     ClassRoomCounter++;
 }
 void printStudents()
 {
     for(int i=0;i<StudentCounter;i++)
     {
         students[i].print();
         cout<<endl;
     }
 }
 void printTeachars()
 {
     for(int i=0;i<TeacharCounter;i++)
     {
         teachars[i].print();
         cout<<endl;
     }
 }
 void printStaffs()
 {
     for(int i=0;i<StaffCounter;i++)
     {
         staffs[i].print();
         cout<<endl;
     }
 }

void printCourses()
 {
     for(int i=0;i<CourseCounter;i++)
     {
         courses[i].print();
         cout<<endl;
     }
 }
 void printClassRooms()
 {
     for(int i=0;i<ClassRoomCounter;i++)
     {
         classRooms[i].print();
         cout<<endl;
     }
 }
};

#endif // SCHOOL_H
