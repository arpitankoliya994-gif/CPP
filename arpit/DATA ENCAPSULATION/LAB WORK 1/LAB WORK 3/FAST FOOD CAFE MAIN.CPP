#include "FAST_FOOD_CAFE.CPP"

int main()
{
    int num;
    cout << "Enter the Number of Cafe :";
    cin >> num;

    FoodCafe cafe[num];
    // for (int i = 0; i < num; i++)
    // {
    //     cafe[i].setCafedata();
    // }
    for (int i = 0; i < num; i++)
    {
        cafe[i].getCafedata();
    }
}