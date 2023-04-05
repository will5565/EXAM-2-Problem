#include <iostream>
#include "PacificCourse.h"

using namespace std;


//Need to use range-based for loops

ostream& operator<< (ostream& rcOut, const PacificCourse& rcCourse) {
	/*while (mcStudents != EOF && mcStudents != "/n") {
		rcOut << mcStudents << endl;
	}
	return rcOut;*/ //way I wrote it on test

	/*for (Student myStudent : rcCourse.mcStudents) {
		rcOut << myStudent << endl;
	}
	return rcOut;*/ // check if this is right once linked projects
}

bool PacificCourse::isIn(const Student& rcStudent) {
	bool studIn = false;

	for (Student cStudent : mcStudents) {
		if (cStudent == rcStudent) {
			studIn = true;
		}
	}

	return studIn;
}

void PacificCourse::enroll(const Student& rcStudent) {
	for (Student myStudent : mcStudents) {
		if (!isIn(rcStudent)) {
			mcStudents.push_back(rcStudent);
		}
	}
}