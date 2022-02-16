#include "Course.h"

Course::Course() {
	name = "";
	id = "";
	credits = NULL;
	type = "";
	maxCapacity = NULL;
	daysOfWeek = "";
	start = NULL;
	end = NULL;
	classroom = "";
}

void Course::setName(string name_) {
	name = name_;
}
void Course::setId(string id_) {
	id = id_;
}
void Course::setCredits(int credits_) {
	credits = credits_;
}
void Course::setType(string type_) {
	type = type_;
}
void Course::setMaxCapacity(int maxCapacity_) {
	maxCapacity = maxCapacity_;
}
void Course::setDaysOfWeek(string daysOfWeek_) {
	daysOfWeek = daysOfWeek_;
}
void Course::setStart(int start_) {
	start = start_;
}
void Course::setEnd(int end_) {
	end = end_;
}
void Course::setClassroom(string classroom_) {
	classroom = classroom_;
}

string Course::getName() {
	return name;
}
string Course::getId() {
	return id;
}
int Course::getCredits() {
	return credits;
}
string Course::getType() {
	return type;
}
int Course::getMaxCapacity() {
	return maxCapacity;
}
string Course::getDaysOfWeek() {
	return daysOfWeek;
}
int Course::getStart() {
	return start;
}
int Course::getEnd() {
	return end;
}
string Course::getClassroom() {
	return classroom;
}