#include "Course.h"
#include <iostream>

using namespace std;

int main() {

	Course course;
	course.setName("Calculus II");
	course.setDay(10);
	course.setMonth(05);
	course.setYear(2022);

	cout << course.getName() << endl;
	cout << course.getMonth() << "/"
		<< course.getDay() << "/"
		<< course.getYear() << endl;

	return 0;
}