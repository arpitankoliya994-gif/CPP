#include <iostream>
#include <string.h>
using namespace std;

class FoodCafe
{
private:
    int cafe_id;
    char cafe_name[20];
    char cafe_type[20];
    char cafe_rating[20];
    static string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    FoodCafe()
    {
        this->cafe_id = 0;
        strcpy(this->cafe_name, "NO NAME");
        strcpy(this->cafe_type, "NO TYPE");
        strcpy(this->cafe_rating, "NO RATING");
        this->cafe_establish_year = 0;
        this->cafe_staff_quantity = 0;
    }

    void setCafedata()
    {
        cout << "Enter Cafe ID :";
        cin >> cafe_id;

        fflush(stdin);
        cout << "Enter Cafe Name :";
        gets(cafe_name);

        fflush(stdin);
        cout << "Enter Cafe Type :";
        gets(cafe_type);

        fflush(stdin);
        cout << "Enter Cafe Rating :";
        gets(cafe_rating);

        cout << "Enter Cafe establish year :";
        cin >> cafe_establish_year;

        cout << "Enter Cafe Staff Quantity :";
        cin >> cafe_staff_quantity;
        cout << endl
             << endl;
    }

    void getCafedata()
    {
        cout << "ID :" << cafe_id << endl;
        cout << "Name :" << cafe_name << endl;
        cout << "Type :" << cafe_type << endl;
        cout << "Rating :" << cafe_rating << endl;
        cout << "Location :" << cafe_location << endl;
        cout << "Establish Year :" << cafe_establish_year << endl;
        cout << "Staff Quantity :" << cafe_staff_quantity << endl;
        cout << endl
             << endl;
    }
};
string FoodCafe::cafe_location = "Surat";