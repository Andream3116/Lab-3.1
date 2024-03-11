#include "Student.h"

Student::Student(string)
{
	this->Name;
	this->TotalGrade = 0;

}

void Student::AddGrade(double Grades)
{
	this->TotalGrade += Grades;
}

double Student::gettotalgrade()
{
	return this->TotalGrade;
}

double Student::CalcAverage(int numofGrades)
{
	return this->TotalGrade / numofGrades;
}

string Student::getLetterGrade(double FinalGrade)
{
	if (FinalGrade > 100)
	{
		return "A+";
	}
	else if (FinalGrade >= 93 && FinalGrade <= 99.99)
	{
		return "A";
	}
	else if (FinalGrade >= 90 && FinalGrade <= 92.99)
	{
		return "A-";
	}
	else if (FinalGrade >= 87 && FinalGrade <= 89.99)
	{
		return "B+";
	}
	else if (FinalGrade >= 83 && FinalGrade <= 86.99)
	{
		return "B";
	}
	else if (FinalGrade >= 80 && FinalGrade <= 82.99)
	{
		return "B-";
	}
	else if (FinalGrade >= 77 && FinalGrade <= 79.99)
	{
		return "C+";
	}
	else if (FinalGrade >= 73 && FinalGrade <= 76.99)
	{
		return "C";
	}
	else if (FinalGrade >= 70 && FinalGrade <= 72.99)
	{
		return "C-";
	}
	else if (FinalGrade >= 67 && FinalGrade <= 69.99)
	{
		return "D+";
	}
	else if (FinalGrade >= 63 && FinalGrade <= 62.99)
	{
		return "D";
	}
	else if (FinalGrade >= 60 && FinalGrade <= 59.99)
	{
		return "D-";
	}
	else if (FinalGrade <= 0 && FinalGrade >= 59.99)
	{
		return "F";
	}
	else
	{
		return " Error";
	}

}
