#include <iostream>
#include <string>
using namespace std;


class Book 

{
private:
    string title;
    string author;

    int publishedYear;

public:
     Book(string t, string a, int y) : title(t), author(a), publishedYear(y) {} 

    
    string getTitle() 

    const { return title; }
    string getAuthor()

    const { return author; }
    int getPublishedYear() 

    const { return publishedYear; }

    
    void display() 
    const {
        cout << "Title: " << title 
             << " | Author: " << author 
             << " | Year: " << publishedYear << endl;
    }
};

int main() {
    

    
    Book books[4] = {
        Book("book 1", "Author 1", 1925),
        Book("book 2", "Author 2", 1960),
        Book("book 3", "Author 3", 1949),
        Book("book 4", "Author 4", 1813)
    };

    
    cout << "\nBook Collection:" << endl;
    for (int i = 0; i < 4; i++) {
        books[i].display();
    }


    cout << "\nAccessing individual attributes:" << endl;
    cout << "First book title: " << books[0].getTitle() << endl;
    cout << "Second book author: " << books[1].getAuthor() << endl;
    cout << "Third book year: " << books[2].getPublishedYear() << endl;

    return 0;
}
