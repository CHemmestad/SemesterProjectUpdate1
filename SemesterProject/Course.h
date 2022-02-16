#ifndef COURSE_H
#define COURSE_H

#include "Date.h"

#include <iostream>

using namespace std;

class Course : public Date {
public: 
	Course();

	void setName(string name_);
	string getName();
	void setId(string id_);
	string getId();
	void setCredits(int credits_);
	int getCredits();
	void setType(string type_);
	string getType();
	void setMaxCapacity(int maxCapacity_);
	int getMaxCapacity();
	void setDaysOfWeek(string daysOfWeek_);
	string getDaysOfWeek();
	void setStart(int start_);
	int getStart();
	void setEnd(int end_);
	int getEnd();
	void setClassroom(string classroom_);
	string getClassroom();

private:
	string name;
	string id;
	int credits;
	string type;
	int maxCapacity;
	string daysOfWeek;
	int start;
	int end;
	string classroom;
};
#endif
