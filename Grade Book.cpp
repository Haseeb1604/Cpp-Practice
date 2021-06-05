// Fig. 3.9:
// GradeBook classdefinition in aseparate file frommain.
#include <iostream>
#include <string> 
using namespace std;
class GradeBook
{
   private:
   string courseName; 
   string instructorName;
   public:
   GradeBook(string name, string instructor)
   {
   setCourseName( name );
   setInstructor( instructor); 
   }
    
   void setInstructor( string instructor){ instructorName=instructor; }
   void setCourseName(string name )
   {
    courseName =name;
     if (name.length() <= 30 ) 
     courseName =name; 
     if (name.length() > 30 ) 
      {
       courseName =name.substr( 0, 25 );
       cout << "Name \"" << name<<"\" exceedsmaximumlength (25).\n";
	   cout << "Limiting courseName to first 25 characters.\n" << endl;
      }
   }
    
   string getinstructorName(){ return instructorName; }
   string getCourseName(){ return courseName;     }
    
   void displayMessage()
   { 
     cout << "Welcome to the Course : " << getCourseName()<< "!" << endl;
     cout << "This Course is Presented By: \n" <<"\t\t\t  "<<getinstructorName()<<endl<<endl;
   } 
   
}; 
int main()
{
GradeBook gradeBook1("CS101 Intro to C++ Programming","Muhammad Abdul Tawab");
GradeBook gradeBook2( "CS102 DataStructures in C++","Qazi Haseeb Yousaf");
gradeBook1.displayMessage();
gradeBook2.displayMessage();
} 
