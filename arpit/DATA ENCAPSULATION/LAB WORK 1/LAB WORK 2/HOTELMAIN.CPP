#include "HOTELLOGIC.cpp"

int main()
{
    int N;
    cout << "Enter the number of hotels: ";
    cin >> N;
    Hotel h1[N];
    for (int i = 0; i < N; i++)
    {
        h1[i].setHotelData();
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        h1[i].getHotelData();
        cout << endl;
    }
}