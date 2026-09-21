#include <iostream>
#include <Person.h>
#include<School.h>
using namespace std;

int main()
{
 /*Student s;
 s.informations();
 s.print();

 Teachar t;
 t.informations();
 t.print();

 Staff f;
 f.informations();
 f.print();

 Course c;
 c.informations();
 c.print();*/

School s;
 int x;
 do
{
    cout<<"press 0 To Exit"<<endl;
    cout <<"press 1 To Add Student"<<endl;
    cout <<"press 2 To Add Teacher"<<endl;
    cout <<"press 3 To Add Staff"<<endl;
    cout <<"press 4 To Add Course"<<endl;
    cout <<"press 5 To Add ClassRoom"<<endl;
    cout <<"press 6 To Add Print All Students"<<endl;
    cout <<"press 7 To Add Print All Teachers"<<endl;
    cout <<"press 8 To Add Print All Staffs"<<endl;
    cout <<"press 9 To Add Print All Courses"<<endl;
    cout <<"press 10 To Add Print All ClassRooms"<<endl;
    cin>>x;
    system("Cls");
    switch (x)
    {

        case 0:
            cout<<"the program End"<<endl;
            break;
        case 1:
            s.addStudent();
            break;
            case 2:
                s.addTeachar();
                break;
            case 3:
                s.addStaff();
                break;
            case 4:
                s.addCourse();
                break;
                case 5:
                s.addClassRoom();
                break;
                case 6:
                    s.printStudents();
                    break;
                case 7:
                    s.printTeachars();
                    break;
                case 8 :
                    s.printStaffs();
                    break;
                case 9:
                    s.printCourses();
                    break;
                case 10 :
                    s.printClassRooms();
                    break;
                default:
                    cout<<"invalid input!press Number from(0 - 10)"<<endl;
                    break;
    }

}
while(x!=0);



}
