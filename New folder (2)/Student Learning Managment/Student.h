#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    private:
     string fName,lName;
     int Age,Date,Month;
     double Year;
     char Gender[6];
    public:
        int Id;
        Student();
        void getRecord(int Id);
        void DisplayRecord(int id);
        bool EditRecord(int id);
};

#endif // STUDENT_H
