#include <iostream>
#include <string>

#include "Gradebook.h"

using namespace std;

GradeBook::GradeBook(string name, string nameProf) {

    setCourseName(name);
    setProfessorName(nameProf);

}

void GradeBook::setCourseName(string name) {

    courseName = name;

}

string GradeBook::getCourseName() {

    return courseName;

}

void GradeBook::setProfessorName(string nameProf) {

    professorName = nameProf;

}

string GradeBook::getProfessorName() {

    return professorName;

}

void GradeBook::displayMessage() {

    cout << "Welcome to the grade book for " << getCourseName() << ", with the professor " 
    << getProfessorName() << "!" << endl;

}