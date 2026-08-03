#include <iostream>
#include <string.h>
using namespace std;

class DiamondComp
{
private:
    int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_diamonds;
    int comp_export_diamonds;
    char comp_ceo_name[20];

public:
    DiamondComp(int id, char name[], int staff_quantity, int revenue, int import_diamonds, int export_diamonds, char ceo_name[])
    {
        this->comp_id = id;
        strcpy(this->comp_name, name);
        this->comp_staff_quantity = staff_quantity;
        this->comp_revenue = revenue;
        this->comp_import_diamonds = import_diamonds;
        this->comp_export_diamonds = export_diamonds;
        strcpy(this->comp_ceo_name, ceo_name);
    }

    void setCompanydata()
    {
        cout << "Enter Company ID :";
        cin >> comp_id;

        fflush(stdin);
        cout << "Enter Company Name :";
        gets(comp_name);

        cout << "Enter Cafe Staff Quantity :";
        cin >> comp_staff_quantity;

        cout << "Enter Company Revenue :";
        cin >> comp_revenue;

        cout << "Enter Company Import Diamond Number :";
        cin >> comp_import_diamonds;

        cout << "Enter Company Export Diamond Number :";
        cin >> comp_export_diamonds;

        fflush(stdin);
        cout << "Enter Company CEO Name :";
        gets(comp_ceo_name);
        cout << endl
             << endl;
    }

    void getCompanydata()
    {
        cout << "ID :" << comp_id << endl;
        cout << "Name :" << comp_name << endl;
        cout << "Staff Quantity :" << comp_staff_quantity << endl;
        cout << "Revenue :" << comp_revenue << endl;
        cout << "Imported Diamonds :" << comp_import_diamonds << endl;
        cout << "Exported Diamonds :" << comp_export_diamonds << endl;
        cout << "CEO Name :" << comp_ceo_name << endl;
        cout << endl
             << endl;
    }
};