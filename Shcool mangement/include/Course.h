#ifndef COURSE_H
#define COURSE_H
#include<iostream>

using namespace std;

class Course
{
 private:

     string courseCode;
     string courseName;
     string teacherName;

 public:
     Course()
     {

     }
    Course( string courseCode ,string courseName , string teacherName )
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }

  void setCourseCode(string courseCode)
  {
       this->courseCode=courseCode;
  }

  void setCourseName(string CourseName)
    {
    this->courseName=CourseName;
    }
   void setTeacherName(string teacherName)
   {
        this->teacherName=teacherName;
   }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }

  void informations()
  {

      cout<<"please enter your CourseCode:"<<endl;
      cin>>courseCode;
       cout<<"please enter your CourseName:"<<endl;
      cin>>courseName;
       cout<<"please enter your TeacherName:"<<endl;
      cin>>teacherName;

  }

    void print()
    {

          cout<<"the CourseCode is :"<<courseCode<<endl;
    cout<<"the CourseName is :"<<courseName<<endl;
        cout<<"the TeacherName is :"<<teacherName<<endl;
    }
};

#endif // COURSE_H
