#pragma once
#include <string>
#include <sstream>

class studentInfo
{
public:
	studentInfo(std::string stidentInformation);
	std::string getFirstName();
	std::string getLastName();
	std::string getName();
	int getId();
	double getGPA();

private:
	std::string firstName;
	std::string lastName;
	int id;
	double gpa;
};

