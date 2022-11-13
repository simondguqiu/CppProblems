#include <bits/stdc++.h>
using namespace std;

int schools;
int students;
int school[120000];
int student[120000];
int dislike;

int main()
{
    cin >> schools;
    cin >> students;
    for (int i = 1; i <= schools; i++)
    {
        cin >> school[i];
    }
    for (int i = 1; i <= students; i++)
    {
        cin >> student[i];
    }
    sort(school + 1, school + schools + 1);
    for (int i = 1; i <= students; i++)
    {
        if (student[i] < school[1])
        {
            dislike = dislike + school[1] - student[i];
            continue;
        }
        if (student[i] > school[schools])
        {
            dislike = dislike + student[i] - school[schools];
            continue;
        }
        int min1 = 1;
        int max = schools;
        int mid;
        while (max >= min1)
        {
            mid = (min1 + max) / 2;
            if (school[mid] >= student[i])
            {
                max = mid - 1;
            }
            if (school[mid] < student[i])
            {
                min1 = mid + 1;
            }
        }
        dislike = dislike + min(abs(school[max] - student[i]), abs(school[min1] - student[i]));
    }
    cout << dislike << endl;
    return 0;
}