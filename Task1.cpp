#include <iostream>
#include <string>
using namespace std;

class Calculator {
private:
    string name;
    int Rollnum;
    int numOfcourses;
    string CourseGrade[20];
    int credithr[20];
    int totalCredithr;
    float CGPA;

public:
    Calculator() : totalCredithr(0), CGPA(0.0) {}

    void takedetails() {
        cout << "Enter your Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter your Roll Number: ";
        cin >> Rollnum;

        cout << "Enter your number of Courses: ";
        cin >> numOfcourses;
    }

    void CalculateGPA() {
        int Gradepoint = 0;
        float totalGradePoints = 0.0;

        for (int i = 0; i < numOfcourses; i++) {
            cout << "Enter the Grade of course " << i + 1 << ": ";
            cin >> CourseGrade[i];

            cout << "Enter the Credit hour of course " << i + 1 << ": ";
            cin >> credithr[i];

            if (CourseGrade[i] == "A" ) {
                Gradepoint = 4;
            } else if (CourseGrade[i] == "B" ) {
                Gradepoint = 3;
            } else if (CourseGrade[i] == "C") {
                Gradepoint = 2;
            } else if (CourseGrade[i] == "D") {
                Gradepoint = 1;
            } else {
                Gradepoint = 0; 
            }

            totalGradePoints += Gradepoint * credithr[i];
            totalCredithr += credithr[i];
        }

        CGPA = totalGradePoints / totalCredithr;
        cout << "Your total CGPA is: " << CGPA << endl;
    }
};

int main() {
    cout<<"--------------------------------Welcome to CGPA Calculator --------------------------------"<<endl;
    Calculator cal;
    cal.takedetails();
    cal.CalculateGPA();
    cout << "------------------------Thank you for Using CGPA Calculator!------------------------" << endl;
    return 0;
}
