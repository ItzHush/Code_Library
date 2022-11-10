#include <iostream>
using namespace std;

int main()
{
    int j, l, k;
    int arr[9] = {2, 4, 8, 0, 5, 7, 13, 3, 9};
    int i;
    for (k = 0; k < 8; k++)
    {
        for (i = 0; i <= 8 - k; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                int swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
    }
    for (l = 0; l < 9; l++)
    {
        cout << " " << arr[l];
    }
}