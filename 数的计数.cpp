#include <iostream>
using namespace std;
int main()
{
    //非原创递推公式：当i为奇数时，h[i]=h[i-1]；
    //             当i为偶数时，h[i]=h[i-1]+h[i/2]。
    //出处：https://blog.csdn.net/fail_perfectly/article/details/81735804
    int num = 0;
    int list[100] = {0};
    cin >> num;
    list[1] = 1;
    for (int i = 2; i <= num; i++)
    {
        list[i] = list[i - 1];
        if (i % 2 == 0)
            list[i] += list[i / 2];
    }
    cout << list[num];
    return 0;
}