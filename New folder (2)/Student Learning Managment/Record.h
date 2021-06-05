#ifndef RECORD_H
#define RECORD_H
#include <iostream>
#include <string>
class Record
{
    private:
     char fName[9],lName[9];
     int Age,Date,Month;
     double Year;
     char Gender[6];
    public:
        int Id;
        Record();
        void getRecord(int Id);
        void DisplayRecord(int id);
        bool EditRecord(int id);
};

#endif // Record_H

