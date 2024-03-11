#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string Name;
	double TotalGrade;

public:
	Student(string);
	void AddGrade(double);
	double gettotalgrade();
	double CalcAverage(int);
	string getLetterGrade(double);


};

