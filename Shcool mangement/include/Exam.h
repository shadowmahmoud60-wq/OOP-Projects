#ifndef EXAM_H
#define EXAM_H
#include<iostream>
#include<Person.h>
using namespace std;

class Exam
{
   private:

 string examName;
 string courseCode;
 string examDate;

       public:
           Exam()
           {

           }
   Exam(string examName,string courseCode,string examDate)
   {
       this->examName=examName;
       this->courseCode=courseCode;
       this->examDate;
   }

   void setExamName(string examName)
   {
        this->examName=examName;
   }

    void setCourseCode(string courseCode)
  {
       this->courseCode=courseCode;
  }

   void setExamDate(string examDate)
   {
        this->examDate=examDate;
   }
   string getExamName()
   {
       return examName;
   }
   string getCourseCode()
   {
       return courseCode;
   }
   string getExamDate()
   {
       return examDate;
   }
};

#endif // EXAM_H
