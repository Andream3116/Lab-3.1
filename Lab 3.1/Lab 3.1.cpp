#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


int main()
{
    string name;
    int Grades;
    int Counter = 0;




    cout << "Student Grade" << endl;
    cout << "===============" << endl;
    cout << "Enter Student Name" << endl;
    cin >> name;
    Student student(name);

    cout << "How Many Grades are you Evaluating" << endl;
    cin >> Grades;
    while (Grades > Counter)
    {
        double ImputGrade = 0;
        Counter++;
        cout << "Enter Grade ==>" << endl;
        cin >> ImputGrade;
        student.AddGrade(ImputGrade);
    }
    int average = student.CalcAverage(Grades);
    cout << "Final Grade is ==>" << endl;
    cout << student.getLetterGrade(average);

}

