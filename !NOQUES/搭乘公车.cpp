#include <bits/stdc++.h>

using namespace std;
struct record {
    int type;
    int price;
    int time;
} records[120000];
struct ticket {
    int validTime;
    int maxPrice;
    bool used;
} ticketBox[120000];
int head = 1, tail = 1;
int recordNumber;
int totalCost;

int main() {
    cin >> recordNumber;
    for (int i = 1; i <= recordNumber; i++) {
        cin >> records[i].type >> records[i].price >> records[i].time;
    }
    for (int i = 1; i <= recordNumber; i++) {
        if (records[i].type == 0) {
            totalCost = totalCost + records[i].price;
            ticketBox[tail].used = false;
            ticketBox[tail].maxPrice = records[i].price;
            ticketBox[tail].validTime = records[i].time + 45;
            tail++;
        } else {
            while (head < tail && ticketBox[head].validTime < records[i].time) {
                head++;
            }
            bool suitTicket = false;
            for (int j = head; j < tail; j++) {
                if (ticketBox[j].maxPrice >= records[i].price && !ticketBox[j].used) {
                    suitTicket = true;
                    ticketBox[j].used = true;
                    break;
                }
            }
            if (!suitTicket) {
                totalCost = totalCost + records[i].price;
            }
        }
    }
    cout << totalCost << endl;
    return 0;
}