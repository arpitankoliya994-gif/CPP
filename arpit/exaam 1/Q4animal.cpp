#include <iostream>
#include <string>
using namespace std;


class Animal

{
protected:
    string name;
    string sound;

public:

    Animal(string n = "", string s = "")
     {
        
        name = n;
        sound = s;
    }


    virtual ~Animal()
     {

    }

    void setName(string n) 
    { name = n; }
    void setSound(string s)
     { sound = s; }

    string getName() 
    
    const { return name; }
    string getSound() 
    
    const { return sound; }


    virtual void displayDetails()
     {
        cout << "Animal - Name: " << name << " | Sound: " << sound << endl;
    }

    virtual void makeSound()
     const {
        cout << name << " makes sound: " << sound << endl;
    }
};


class Dog : public Animal
 {
private:
    string breed;

public:

    Dog(string n = "", string b = "Unknown")  
     { 
        
        name = n;
        breed = b;
        sound = "Woof! Woof!";
     }

    void setBreed(string b) 
     { breed = b; }
    string getBreed() 

    const { return breed; }

    
    void displayDetails() override
     {
        cout << "Dog - Name: " << name 
             << " | Breed: " << breed 
             << " | Sound: " << sound << endl;
    }

    void makeSound() const override {
        cout << name << " (Dog) barks: " << sound << endl;
    }
};


class Cat : public Animal 
{
private:
    string color;

public:
    Cat(string n = "", string c = "Unknown")
         {
             
            name = n;
            color = c;
            sound = "Meow! Meow!";
         }

    void setColor(string c) 
    
    { color = c; }
    string getColor() 
    
    const { return color; }

    
    void displayDetails() override {
        cout << "Cat - Name: " << name 
             << " | Color: " << color            

             
             << " | Sound: " << sound << endl;
    }

    void makeSound() const override {
        cout << name << " (Cat) meows: " << sound << endl;
    }
};


class Bird : public Animal
 {
private:
    double wingspan;

public:
    Bird(string n = "", double ws = 0.0)
        {
            
            name = n;
            wingspan = ws;
            sound = "Chirp! Chirp!";
        }

    void setWingspan(double ws)
    
    { wingspan = ws; }
    double getWingspan()
    
    const { return wingspan; }

    
    void displayDetails() override 
    {
        cout << "Bird - Name: " << name 
             << " | Wingspan: " << wingspan << " cm"
             << " | Sound: " << sound << endl;
    }

    void makeSound()
    
    const override
      {
        cout << name << " (Bird) chirps: " << sound << endl;
    }
};

int main()

{
    string dogName, breed, catName, color, birdName;
    double wingspan;

    cout << "Enter dog name and breed: ";

    cin >> dogName >> breed;

    cout << "Enter cat name and color: ";

    cin >> catName >> color;
    cout << "Enter bird name and wingspan: ";
    cin >> birdName >> wingspan;

    Dog dog(dogName, breed);
    Cat cat(catName, color);
    Bird bird(birdName, wingspan);

    Animal* animals[] = {&dog, &cat, &bird};
    int numAnimals = 3;


    cout << "\n=== Displaying Details  ===" << endl;

    for (int i = 0; i < numAnimals; i++) {
        animals[i]->displayDetails();
    }
    cout << "\n=== making sound ===" << endl;

    for ( int i=0 ; i < numAnimals ; i++)
    {
        animals[i]->makeSound();
    }

    return 0;
}
