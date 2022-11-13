#include <bits/stdc++.h>
using namespace std;

int numbers;
int number[120000];
int target;

int main()
{
    cin >> numbers;
    for (int i = 1; i <= numbers; i++)
    {
        cin >> number[i];
    }
    cin >> target;
    int min = 1;
    int max = numbers;
    int mid = 0;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (number[mid] > target)
        {
            max = mid - 1;
        }
        if (number[mid] < target)
        {
            min = mid + 1;
        }
        if (number[mid] == target)
        {
            cout << mid << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
