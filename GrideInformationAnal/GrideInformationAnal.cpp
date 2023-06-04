
#include <iostream>
#include <exception>

#include "studentInfo.h"
#include "studentList.h"

//I really love typing std::. 
//Okay, No. I wanted to see what is part of the standard library
void printStudent(studentInfo student)
{
    std::cout << "Name: " << student.getName() << "\n";
    std::cout << "ID: " << student.getId() << "\n";
    std::cout << "GPA: " << student.getGPA() << "\n\n";
}

int main(int argc, const char * argv[])
{
    if (argc != 2)//Kill progam with out file
    {
        std::cout << "PATH_TO_FILE";
        return -1;
    }
    try
    {
        
        
        std::string path(argv[1]);

        studentList list(path);
        
        std::cout << "Top of the Class \n";
        printStudent(list.getValedictorian());
        
        std::cout << "\n\nThe kiss ass's\n\n";
        for (studentInfo s : list.getStars())
            printStudent(s);
        
        std::cout << "\n\nAnd people who party to much\n\n";
        for (studentInfo s : list.getFails())
            printStudent(s);
        
    }
    catch (std::exception &say)
    {
        std::cout << "Toys where thrown. \n" << say.what() << "\n";
        return -1;
    }
    return 0;
}

