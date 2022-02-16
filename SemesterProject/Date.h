#ifndef DATE_H
#define DATE_H

#include <iostream>

using namespace std;

class Date {
public:
	Date();

	void setDay(int day_);
	int getDay();
	void setMonth(int month_);
	int getMonth();
	void setYear(int year_);
	int getYear();

private:
	int day;
	int month;
	int year;
};
#endif