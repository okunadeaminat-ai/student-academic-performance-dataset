#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string studentID;
    string department;
    int level;
    double attendancePercentage;
    double averageExaminationScore;
};

int main() {

   vector<Student> students = {
    {"DMW26-001", "Computer Science", 300, 91.5, 78.0},
    {"DMW26-002", "Cyber Security", 200, 67.0, 72.5},
    {"DMW26-003", "Software Engineering", 100, 84.5, 81.0},
    {"DMW26-004", "Information Technology", 300, 73.5, 69.0},
    {"DMW26-005", "Computer Science", 200, 96.0, 88.5},
    {"DMW26-006", "Cyber Security", 100, 58.5, 64.0},
    {"DMW26-007", "Software Engineering", 300, 89.0, 92.0},
    {"DMW26-008", "Information Technology", 200, 77.5, 83.0},
    {"DMW26-009", "Computer Science", 100, 82.0, 75.5},
    {"DMW26-010", "Cyber Security", 300, 94.5, 86.0},
    {"DMW26-011", "Software Engineering", 200, 61.0, 70.5},
    {"DMW26-012", "Information Technology", 100, 88.0, 79.0},
    {"DMW26-013", "Computer Science", 300, 69.5, 73.0},
    {"DMW26-014", "Cyber Security", 200, 85.0, 91.5},
    {"DMW26-015", "Software Engineering", 100, 76.0, 68.5},
    {"DMW26-016", "Information Technology", 300, 98.0, 94.0},
    {"DMW26-017", "Computer Science", 200, 55.5, 62.0},
    {"DMW26-018", "Cyber Security", 100, 80.5, 77.0},
    {"DMW26-019", "Software Engineering", 300, 72.0, 85.5},
    {"DMW26-020", "Information Technology", 200, 90.0, 87.0}
};

    ofstream file("students.csv");

    if (!file) {
        cout << "Error creating dataset file." << endl;
        return 1;
    }

    file << "Student ID,Department,Level,Attendance Percentage,Average Examination Score\n";

    for (const Student& student : students) {
        file << student.studentID << ","
             << student.department << ","
             << student.level << ","
             << student.attendancePercentage << ","
             << student.averageExaminationScore << "\n";
    }

    file.close();

    cout << "Student dataset created successfully!" << endl;
    return 0;
}