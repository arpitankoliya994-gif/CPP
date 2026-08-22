#include <iostream>
#include <string>

using namespace std;

class Animal 


{

private:

    string name;
    string sound;

public:
    
    Animal(string n = "", string s = "") 
     {
        name = n;
        sound = s;
     }


    void setName(string n) 
    { name = n; }
    void setSound(string s) 
    
    { sound = s; }

    
    string getName()
    
    const { return name; }
    string getSound() 
    
    const { return sound; }

    
    virtual void makeSound() const = 0;
};


class Dog : public Animal 

{
     
public:
    Dog(string name = "Unknown Dog") 
        : Animal(name, "Woof! Woof!") {}

    
    
    void bark() const {
        cout << getName() << " barks: " << getSound() << endl;
    }

    void makeSound() const override {
        bark();
    }
};


class Cat : public Animal
 {
public:
    Cat(string name = "Unknown Cat") 
        : Animal()
     {
            
            setName(name);
            setSound("Meow! Meow!");
        }

    



    void meow() const {
        cout << getName() << " meows: " << getSound() << endl;
    }

    void makeSound() const override {
        meow();
    }
};

int main()
 {
    string dogName, catName, dogSound, catSound;

    cout << "Enter dog name: ";
    cin >> dogName;
    cout << "Enter dog sound: ";
    cin >> dogSound;
    cout << "Enter cat name: ";
    cin >> catName;
    cout << "Enter cat sound: ";
    cin >> catSound;

    Dog dog(dogName);
    Cat cat(catName);
    dog.setSound(dogSound);
    cat.setSound(catSound);

    cout << "\n--- Dog ---" << endl;
    dog.makeSound();
    dog.bark();

    cout << "\n--- Cat ---" << endl;
    cat.makeSound();
    cat.meow();


    cout << "\n=== Animal Details ===" << endl;
    
    cout << "Dog's name: " << dog.getName() << endl;
    cout << "Cat's name: " << cat.getName() << endl;
    cout << "Dog's sound: " << dog.getSound() << endl;
    cout << "Cat's sound: " << cat.getSound() << endl;

    return 0;
    
}
