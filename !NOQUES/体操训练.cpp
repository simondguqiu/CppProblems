#include <bits/stdc++.h>
using namespace std;

short int status[1000][1000] = {{0}}; //排名状态
int students = 0;                     //学生人数
int trainings = 0;                    //训练次数
int winall = 0;                       //完胜次数
bool win = true;                      //是否胜利

int main()
{
    cin >> trainings >> students;
    for (int i = 1; i <= trainings; i++)
    {
        for (int j = 1; j <= students; j++)
        {
            int rows = 0;
            cin >> rows;
            status[i][rows] = j;
        }
    }
    for (int i = 1; i <= students; i++)
    {
        for (int j = 1; j <= students; j++)
        {
            if (i != j)
            {
                win = true;
                for (int row = 1; row <= trainings; row++)
                {
                    if (status[row][i] > status[row][j])
                    {
                        win = false;
                        break;
                    }
                }
                if (win)
                {
                    winall++;
                }
            }
        }
    }
    cout << winall;
    return 0;
}