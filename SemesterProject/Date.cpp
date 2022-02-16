#include "Date.h"

Date::Date() {
	day = NULL;
	month = NULL;
	year = NULL;
}

void Date::setDay(int day_) {
	day = day_;
}
void Date::setMonth(int month_) {
	month = month_;
}
void Date::setYear(int year_) {
	year = year_;
}

int Date::getDay() {
	return day;
}
int Date::getMonth() {
	return month;
}
int Date::getYear() {
	return year;
}

//is older function()