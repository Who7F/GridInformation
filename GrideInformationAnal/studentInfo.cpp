#include "studentInfo.h"


studentInfo::studentInfo(std::string stidentInformation)
{
	std::stringstream studentStream(stidentInformation);
	studentStream >> firstName;
	studentStream >> lastName;
	studentStream >> id;
	studentStream >> gpa;

};

std::string studentInfo::getFirstName() 
{
	return firstName;
}


std::string studentInfo::getLastName() 
{
	return lastName;
}

std::string studentInfo::getName() 
{
	return firstName + " " + lastName;
}

int studentInfo::getId()
{
	return id;
}
double studentInfo::getGPA() 
{
	return gpa;
}