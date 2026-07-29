#include <iostream>
using namespace std;

class TimeConverter
{
public:
    int hours;
    int seconds;
    int min;
    int sec;
};

int main()
{
    TimeConverter c1;
    int num;

    cout << "1. Seconds to HH:MM:SS" << endl;
    cout << "2. HH:MM:SS to Seconds" << endl;
    cout << "Enter your choice: "; 
    cin >> num;

    if (num == 1)
    {
        cout << "Enter seconds : ";
        cin >> c1.seconds;
        cout << "HH : MM : SS => "
             << c1.seconds / 3600 << ":" << (c1.seconds % 3600) / 60 << ":" << c1.seconds % 60
             << endl;
    }
    else if (num == 2)
    {
        cout << "Enter hours : ";
        cin >> c1.hours;
        cout << "Enter minutes : ";
        cin >> c1.min;
        cout << "Enter seconds : ";
        cin >> c1.sec;
        cout << "Total seconds: " << (c1.hours * 3600) + (c1.min * 60) + (c1.sec) << endl;
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
}