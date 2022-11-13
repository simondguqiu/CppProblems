#include <iostream>
using namespace std;

struct bugs
{
    int eggs = 0;
    int adults = 0;
}; //虫子的卵、成虫数据

int main()
{
    bugs data[105];     //虫子的数据列表
    int BirthRound = 0; //产卵周期
    int EggNumber = 0;  //产卵数量
    int ToMonth = 0;    //模拟的月数

    cin >> BirthRound >> EggNumber >> ToMonth;
    data[0].eggs = 0;
    data[0].adults = 1;

    for (int i = 2; i <= ToMonth; i++)
    {
        // 2个递推公式
        data[i].eggs = data[i - BirthRound].eggs * EggNumber;   //本月的卵数=产卵周前之前的成虫数×产卵数量
        data[i].adults = data[i - 1].adults + data[i - 2].eggs; //上月的虫子数+2个月前的卵数
    }

    cout << data[ToMonth].adults;
    return 0;
}