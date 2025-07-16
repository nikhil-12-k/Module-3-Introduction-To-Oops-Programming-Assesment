#include <iostream>
#include <string>
using namespace std;

// Class to represent lecture details
class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;

public:
    // Default Constructor
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
    }

    // Parameterized Constructor
    Lecture(string name, string subject, string course) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
    }

    // Function to assign values through user input
    void assignLectureDetails() {
        cout << "Enter Lecturer Name: ";
        getline(cin, lecturerName);
        cout << "Enter Subject Name: ";
        getline(cin, subjectName);
        cout << "Enter Course Name: ";
        getline(cin, courseName);
    }

    // Function to display lecture details
    void displayLectureDetails() {
        cout << "\nLecturer Name : " << lecturerName << endl;
        cout << "Subject Name  : " << subjectName << endl;
        cout << "Course Name   : " << courseName << endl;
    }
};

// Main function
int main() {
    int numberOfLecturers = 5;
    Lecture lecturers[5];

    cout << "Enter details of " << numberOfLecturers << " lecturers:\n";

    for (int i = 0; i < numberOfLecturers; i++) {
        cout << "\n--- Lecturer " << i + 1 << " ---\n";
        cin.ignore(); // To handle newline character
        lecturers[i].assignLectureDetails();
    }

    cout << "\nDisplaying all lecturer details:\n";
    for (int i = 0; i < numberOfLecturers; i++) {
        cout << "\n--- Lecturer " << i + 1 << " Details ---";
        lecturers[i].displayLectureDetails();
    }

    return 0;
}