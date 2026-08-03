#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    char stu_email[20];
    char stu_college[20];

public:
    void Setstudentdata()
    {
        cout << "Enter Student ID : ";
        cin >> stu_id;

        fflush(stdin);
        cout << "Enter Student Name : ";
        gets(stu_name);

        cout << "Enter Student Age: ";
        cin >> stu_age;

        fflush(stdin);
        cout << "Enter Student Course : ";
        gets(stu_course);

        fflush(stdin);
        cout << "Enter Student City : ";
        gets(stu_city);

        fflush(stdin);
        cout << "Enter Student E-Mail : ";
        gets(stu_email);

        fflush(stdin);
        cout << "Enter Student College : ";
        gets(stu_college);

        cout << endl
             << endl;
    }

    void Getstudentdata()
    {
        cout << "ID :" << stu_id << " || "
             << "Name :" << stu_name << " || "
             << "Age :" << stu_age << " || "
             << "Course :" << stu_course << " || "
             << "City :" << stu_city << " || "
             << "E-Mail :" << stu_email << " || "
             << "College :" << stu_college << endl
             << endl;
    }
};

int main()
{
    Student s1, s2, s3, s4, s5;

    s1.Setstudentdata();
    s2.Setstudentdata();
    s3.Setstudentdata();
    s4.Setstudentdata();
    s5.Setstudentdata();
    s1.Getstudentdata();
    s2.Getstudentdata();
    s3.Getstudentdata();
    s4.Getstudentdata();
    s5.Getstudentdata();
}