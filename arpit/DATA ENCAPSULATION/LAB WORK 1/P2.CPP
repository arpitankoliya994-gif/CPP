

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int cust_id;
    char cust_name[20];
    int cust_age;
    char cust_city[20];
    long long int cust_mobile_number;
    int cust_simcard_validity;
    char cust_telecom_brand_name[20];

public:
    void SetCustomerdata()
    {
        cout << "Enter Customer ID : ";
        cin >> cust_id;

        fflush(stdin);
        cout << "Enter Customer Name : ";
        gets(cust_name);

        cout << "Enter Customer Age: ";
        cin >> cust_age;

        cout << "Enter Mobile Number : ";
        cin >> cust_mobile_number;

        cout << "Enter SIM Card Validity(in years) : ";
        cin >> cust_simcard_validity;

        fflush(stdin);
        cout << "Enter Telecom Brand Name : ";
        gets(cust_telecom_brand_name);

        fflush(stdin);
        cout << "Enter Customer City : ";
        gets(cust_city);

        cout << endl
             << endl;
    }

    void GetCustomerdata()
    {
        cout << "ID :" << cust_id << " || "
             << "Name :" << cust_name << " || "
             << "Age :" << cust_age << " || "
             << "Mobile Number :" << cust_mobile_number << " || "
             << "SIM Card Validity :" << cust_simcard_validity << " || "
             << "Telecom Brand Name :" << cust_telecom_brand_name << " || "
             << "City :" << cust_city << endl
             << endl;
    }
};

int main()
{
    Student s1, s2, s3, s4, s5;

    s1.SetCustomerdata();
    s2.SetCustomerdata();
    s3.SetCustomerdata();
    s4.SetCustomerdata();
    s5.SetCustomerdata();
    s1.GetCustomerdata();
    s2.GetCustomerdata();
    s3.GetCustomerdata();
    s4.GetCustomerdata();
    s5.GetCustomerdata();
}
