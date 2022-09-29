#include <iostream>
#include <string>

using namespace std;

class GradeBook {

    public:
        GradeBook(string name, string nameProf);

        void setCourseName(string name);
        string getCourseName();

        void setProfessorName(string nameProf);
        string getProfessorName();

        void displayMessage();
    
    private:
        string courseName, professorName;

};