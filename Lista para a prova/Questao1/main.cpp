#include <iostream>

using namespace std;

#include "Gradebook.h"

int main() {

    GradeBook gradeBook1("POO", "Thigas");
    GradeBook gradeBook2("SO", "Thigas");

    cout << "gradebook1 created for course: " << gradeBook1.getCourseName() << endl;
    cout << "gradebook2 created for course: " << gradeBook2.getCourseName() << endl;
    cout << "-------------------------------------------------------------" << endl;

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();


    return 0;
}