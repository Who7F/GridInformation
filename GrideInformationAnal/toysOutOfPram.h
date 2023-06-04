#pragma once
#include <exception>

class toysOutOfPram : public std::exception
{
public:
	const char* what() const throw() 
	{
		return "StudentList: 404";
	}

};

