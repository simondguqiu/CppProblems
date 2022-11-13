#include<iostream>
using namespace std;

int MONTH[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int dates = 0;
int year = 1999;
int month = 4;
int day = 30;

bool LeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {
		return true;
	} else {
		return false;
	}
}

void PrintDate(int year, int month, int day) {
	cout << year << "-";
	if (month < 10) {
		cout << "0" << month << "-";
	} else {
		cout << month << "-";
	}
	if (day < 10) {
		cout << "0" << day;
	} else {
		cout << day;
	}
}

int main() {
	cin >> dates;
	for (int i = 1; i < dates; i++) {
		day++;
		if (day > MONTH[month]) {
			month++;
			day = 1;
			if (month > 12) {
				year++;
				MONTH[2] = LeapYear(year) ? 29 : 28;
				month = 1;
			}
		}
	}
	PrintDate(year, month, day);
	return 0;
}
