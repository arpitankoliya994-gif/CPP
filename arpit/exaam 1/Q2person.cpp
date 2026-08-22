#include <iostream>
#include <string>
using namespace std;


class Person {
private:
    string name;
    int age;
    string address;

public:
    
    Person(string n, int a, string addr) 
        
         {
            name = n;
            age = a;
            address = addr;
        }

    
    string getName() 
    
    const { return name; }
    int getAge() 
    const { return age; }
    
    string getAddress()
     const { return address; }

    
    void setName(string n)
     { name = n; }
    void setAge(int a)
     { 
        if (a > 0 && a < 150) age = a;
        else cout << "Invalid age!" << endl;
    }
    void setAddress(string addr)
     { address = addr; }

    
    void displayDetails() 
    
    const {
        cout << "Name: " << name 
             << " | Age: " << age 
             << " | Address: " << address << endl;
    }
};

int main() {
    

    int n;
    cout << "\nEnter number of persons: ";
    cin >> n;

    
    Person** personArray = new Person*[n];
 
    for (int i = 0; i < n; i++)
    
    {
        string name, address;
        int age;

        cout << "\nEnter details for Person " << (i + 1) << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> address;

        
        personArray[i] = new Person(name, age, address);
    }

    
    cout << "\n=== All Persons' Details ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". ";
        personArray[i]->displayDetails();
    }

    
    if (n > 0) 
    {
        cout << "\n=== Modifying Person 1's details ===" << endl;
        personArray[0]->setAge(35);

        personArray[0]->setAddress("New York");
        cout << "Updated: ";

        personArray[0]->displayDetails();
    }

    
    for (int i = 0; i < n; i++) {
        delete personArray[i];
    }
    delete[] personArray;

    return 0;
}
