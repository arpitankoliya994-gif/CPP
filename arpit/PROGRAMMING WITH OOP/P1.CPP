#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    float emp_salary;
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main()
{
    Employee e1, e2, e3, e4, e5;

    cout << "Employee Number : 1" << endl;

    cout << "Enter Employee ID : ";
    cin >> e1.emp_id;

    fflush(stdin);
    cout << "Enter Name : ";
    gets(e1.emp_name);

    cout << "Enter Age : ";
    cin >> e1.emp_age;

    fflush(stdin);
    cout << "Enter Role : ";
    gets(e1.emp_role);

    cout << "Enter Salary : ";
    cin >> e1.emp_salary;

    fflush(stdin);
    cout << "Enter City : ";
    gets(e1.emp_city);

    fflush(stdin);
    cout << "Enter Company Name : ";
    gets(e1.emp_company_name);

    cout << "Enter Experience (in years) : ";
    cin >> e1.emp_experience;

    cout << endl
         << endl;

    cout << "Employee Number : 2" << endl;

    cout << "Enter Employee ID : ";
    cin >> e2.emp_id;

    fflush(stdin);
    cout << "Enter Name : ";
    gets(e2.emp_name);

    cout << "Enter Age : ";
    cin >> e2.emp_age;

    fflush(stdin);
    cout << "Enter Role : ";
    gets(e2.emp_role);

    cout << "Enter Salary : ";
    cin >> e2.emp_salary;

    fflush(stdin);
    cout << "Enter City : ";
    gets(e2.emp_city);

    fflush(stdin);
    cout << "Enter Company Name : ";
    gets(e2.emp_company_name);

    cout << "Enter Experience (in years) : ";
    cin >> e2.emp_experience;

    cout << endl
         << endl;

    cout << "Employee Number : 3" << endl;

    cout << "Enter Employee ID : ";
    cin >> e3.emp_id;

    fflush(stdin);
    cout << "Enter Name : ";
    gets(e3.emp_name);

    cout << "Enter Age : ";
    cin >> e3.emp_age;

    fflush(stdin);
    cout << "Enter Role : ";
    gets(e3.emp_role);

    cout << "Enter Salary : ";
    cin >> e3.emp_salary;

    fflush(stdin);
    cout << "Enter City : ";
    gets(e3.emp_city);

    fflush(stdin);
    cout << "Enter Company Name : ";
    gets(e3.emp_company_name);

    cout << "Enter Experience (in years) : ";
    cin >> e3.emp_experience;

    cout << endl
         << endl;

    cout << "Employee Number : 4" << endl;

    cout << "Enter Employee ID : ";
    cin >> e4.emp_id;

    fflush(stdin);
    cout << "Enter Name : ";
    gets(e4.emp_name);

    cout << "Enter Age : ";
    cin >> e4.emp_age;

    fflush(stdin);
    cout << "Enter Role : ";
    gets(e4.emp_role);

    cout << "Enter Salary : ";
    cin >> e4.emp_salary;

    fflush(stdin);
    cout << "Enter City : ";
    gets(e4.emp_city);

    fflush(stdin);
    cout << "Enter Company Name : ";
    gets(e4.emp_company_name);

    cout << "Enter Experience (in years) : ";
    cin >> e4.emp_experience;

    cout << endl
         << endl;

    cout << "Employee Number : 5" << endl;

    cout << "Enter Employee ID : ";
    cin >> e5.emp_id;

    fflush(stdin);
    cout << "Enter Name : ";
    gets(e5.emp_name);

    cout << "Enter Age : ";
    cin >> e5.emp_age;

    fflush(stdin);
    cout << "Enter Role : ";
    gets(e5.emp_role);

    cout << "Enter Salary : ";
    cin >> e5.emp_salary;

    fflush(stdin);
    cout << "Enter City : ";
    gets(e5.emp_city);

    fflush(stdin);
    cout << "Enter Company Name : ";
    gets(e5.emp_company_name);

    cout << "Enter Experience (in years) : ";
    cin >> e5.emp_experience;

    cout << endl
         << endl;

    cout << "ID : " << e1.emp_id << " || "
         << "Name : " << e1.emp_name << " || "
         << "Age : " << e1.emp_age << " || "
         << "Role : " << e1.emp_role << " || "
         << "Salary : " << e1.emp_salary << " || "
         << "City : " << e1.emp_city << " || "
         << "Experience : " << e1.emp_experience << " years" << " || "
         << "Company : " << e1.emp_company_name << endl
         << endl;

    cout << "ID : " << e2.emp_id << " || "
         << "Name : " << e2.emp_name << " || "
         << "Age : " << e2.emp_age << " || "
         << "Role : " << e2.emp_role << " || "
         << "Salary : " << e2.emp_salary << " || "
         << "City : " << e2.emp_city << " || "
         << "Experience : " << e2.emp_experience << " years" << " || "
         << "Company : " << e2.emp_company_name << endl
         << endl;

    cout << "ID : " << e3.emp_id << " || "
         << "Name : " << e3.emp_name << " || "
         << "Age : " << e3.emp_age << " || "
         << "Role : " << e3.emp_role << " || "
         << "Salary : " << e3.emp_salary << " || "
         << "City : " << e3.emp_city << " || "
         << "Experience : " << e3.emp_experience << " years" << " || "
         << "Company : " << e3.emp_company_name << endl
         << endl;

    cout << "ID : " << e4.emp_id << " || "
         << "Name : " << e4.emp_name << " || "
         << "Age : " << e4.emp_age << " || "
         << "Role : " << e4.emp_role << " || "
         << "Salary : " << e4.emp_salary << " || "
         << "City : " << e4.emp_city << " || "
         << "Experience : " << e4.emp_experience << " years" << " || "
         << "Company : " << e4.emp_company_name << endl
         << endl;

    cout << "ID : " << e5.emp_id << " || "
         << "Name : " << e5.emp_name << " || "
         << "Age : " << e5.emp_age << " || "
         << "Role : " << e5.emp_role << " || "
         << "Salary : " << e5.emp_salary << " || "
         << "City : " << e5.emp_city << " || "
         << "Experience : " << e5.emp_experience << " years" << " || "
         << "Company : " << e5.emp_company_name << endl
         << endl;
}