#include "studentList.h"
//using namespace std;

#define FAIL_GRADE 65
#define STAR_GRADE 90

studentList::studentList(std::string filePath)
{
	std::ifstream studentFile(filePath);

	std::string lineCounts;
	while (!studentFile.eof())
	{
		std::getline(studentFile, lineCounts);

		studentInfo s(lineCounts);
		students.push_back(s);
	}
	studentFile.close();

	sort(students.begin(), students.end(), [](studentInfo& s1, studentInfo& s2) { return s1.getGPA() > s2.getGPA(); });

}
	
studentInfo studentList::getValedictorian()
{
	if (students.size() == 0 || students.at(0).getGPA() < FAIL_GRADE)
		throw toysOutOfPram();
	return students.at(0);
}

std::vector<studentInfo> studentList::getStars() 
{
	std::vector<studentInfo> toReturn;
	for (studentInfo s : students)
	{
		if (s.getGPA() < STAR_GRADE)
			break;
		else
			toReturn.push_back(s);
	}
	return toReturn;
	
}

std::vector<studentInfo> studentList::getFails() 
{
	std::vector<studentInfo> toReturn;
	for (std::vector<studentInfo>::reverse_iterator i = students.rbegin(); i < students.rend(); i++)
	{
		if (i->getGPA() >= FAIL_GRADE)
			break;
		else
			toReturn.push_back(*i);
	}
	return toReturn;
}


