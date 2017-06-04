/*
Write declarations for the following arrays:
	An array with 10 structs as elements.
	An array containing 10 student averages.
*/
#include <iostream>
#include <string>
using namespace std;

const int NUM_MARKS = 4;

struct Student
{
    string studentNumber, name;
    int marks[NUM_MARKS];
};

void inputData(Student & studentP)
{
    cout << "Enter the student's information" << endl;
    cout << "Student number: ";
    cin >> studentP.studentNumber;
    cout << "Name: ";
    cin.get();
    getline(cin, studentP.name, '\n');
    cout << "Marks: " << endl;
    for (int i = 0; i < NUM_MARKS; i++)
    {
        cout << "Assignment " << i << " : ";
        cin >> studentP.marks[i];
    }
}

void displayData(const Student & studentP)
{
    cout << "The student's information:" << endl;
    cout << "Student number: " << studentP.studentNumber << endl;
    cout << "Name: " << studentP.name << endl;
    cout << "Marks:" << endl;
    for (int i = 0; i < NUM_MARKS; i++)
        cout << " Assignment " << i << ": " << studentP.marks[i] << endl;
}

float average(const Student & studentP)
{
    float total = 0;

    for (int i = 0; i < NUM_MARKS; i++)
        total += studentP.marks[i];
    return total / NUM_MARKS;
}


int main()
{
    const int NUM_STUDENTS = 10;

    Student students[NUM_STUDENTS];
    float averages[NUM_STUDENTS];

    return 0;
}
