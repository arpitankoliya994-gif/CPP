#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    int car_id;
    char car_color[50];
    char car_model[50];
    int car_release_year;
    char car_company_name[50];
};

int main()
{
    Car c1, c2, c3, c4;

    cout << "Car Number : 1" << endl;

    cout << "Enter Car ID: ";
    cin >> c1.car_id;

    fflush(stdin);
    cout << "Enter Car Model: ";
    gets(c1.car_model);

    cout << "Enter Release Year: ";
    cin >> c1.car_release_year;

    fflush(stdin);
    cout << "Enter Color: ";
    gets(c1.car_color);

    fflush(stdin);
    cout << "Enter Company Name: ";
    gets(c1.car_company_name);

    cout << endl;

    cout << "Car Number : 2" << endl;

    cout << "Enter Car ID: ";
    cin >> c2.car_id;

    fflush(stdin);
    cout << "Enter Car Model: ";
    gets(c2.car_model);

    cout << "Enter Release Year: ";
    cin >> c2.car_release_year;

    fflush(stdin);
    cout << "Enter Color: ";
    gets(c2.car_color);

    fflush(stdin);
    cout << "Enter Company Name: ";
    gets(c2.car_company_name);

    cout << endl;

    cout << "Car Number : 3" << endl;

    cout << "Enter Car ID: ";
    cin >> c3.car_id;

    fflush(stdin);
    cout << "Enter Car Model: ";
    gets(c3.car_model);

    cout << "Enter Release Year: ";
    cin >> c3.car_release_year;

    fflush(stdin);
    cout << "Enter Color: ";
    gets(c3.car_color);

    fflush(stdin);
    cout << "Enter Company Name: ";
    gets(c3.car_company_name);

    cout << endl;

    cout << "Car Number : 4" << endl;

    cout << "Enter Car ID: ";
    cin >> c4.car_id;

    fflush(stdin);
    cout << "Enter Car Model: ";
    gets(c4.car_model);

    cout << "Enter Release Year: ";
    cin >> c4.car_release_year;

    fflush(stdin);
    cout << "Enter Color: ";
    gets(c4.car_color);

    fflush(stdin);
    cout << "Enter Company Name: ";
    gets(c4.car_company_name);

    cout << endl;

    cout << "Car ID : " << c1.car_id << " || "
         << "Car Company Name : " << c1.car_company_name << " || "
         << "Car Model : " << c1.car_model << " || "
         << "Car color : " << c1.car_color << " || "
         << "Release year : " << c1.car_release_year << endl
         << endl;

    cout << "Car ID : " << c2.car_id << " || "
         << "Car Company Name : " << c2.car_company_name << " || "
         << "Car Model : " << c2.car_model << " || "
         << "Car color : " << c2.car_color << " || "
         << "Release year : " << c2.car_release_year << endl
         << endl;

    cout << "Car ID : " << c3.car_id << " || "
         << "Car Company Name : " << c3.car_company_name << " || "
         << "Car Model : " << c3.car_model << " || "
         << "Car color : " << c3.car_color << " || "
         << "Release year : " << c3.car_release_year << endl
         << endl;

    cout << "Car ID : " << c4.car_id << " || "
         << "Car Company Name : " << c4.car_company_name << " || "
         << "Car Model : " << c4.car_model << " || "
         << "Car color : " << c4.car_color << " || "
         << "Release year : " << c4.car_release_year << endl
         << endl;
}