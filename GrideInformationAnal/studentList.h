
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>

#include "studentInfo.h"
#include "toysOutofPram.h"

class studentList
{
public:
	studentList(std::string filePath);
	
	studentInfo getValedictorian();
	std::vector<studentInfo> getStars();
	std::vector<studentInfo> getFails();

private:
	std::vector<studentInfo> students;
};

