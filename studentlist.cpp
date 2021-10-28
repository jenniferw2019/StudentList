#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

struct Student
{
  char firstName[40];
  char lastName[40];
  int id;
  float gpa;
};

void addStudent (Student* pStudent, vector<Student*>* pVector);

int main ()
{
  bool runList = true;
  char input[10];
  vector<Student*> vecStudentList;
  vector<Student*>* ptrVecStudent;
  ptrVecStudent = &vecStudentList;

  while (runList == true)
    {
      cout << "Type ADD or PRINT or DELETE" < endl;
      cin.get(strInput. 10);
      cin.get();

      if (strInput == "ADD")
	{
	  Student* ptrStudent = new Student();
	  addStudent(ptrStudent, ptrVecStudent);
	}
    }
 
  vector<Student*> vecStudentList;
  vecStudentList.push_back(ptrtest);


  for (vector<Student*>::iterator it = vecStudentList.begin(); it != vecStudentList.end(); it++)
    {
      cout << (*it)->firstName << ", " << (*it)->lastName;
      cout << ", " << (*it)->id << ", " << fixed<<setprecision(2)<<(*it)->gpa << endl;
      
    }
  return 0;
}

void addStudent(Student* pStudent, vector<Student*>* pVector)
{

  cout << "Type student first name." << endl;
  cin >> pStudent->firstName;
  cin.get();
  cout << "Type student last name." << endl;
  cin >> pStudent->lastName;
  cin.get();
  cout << "Type id." << endl;
  cin >> pStudent->id;
  cin.get();
  cout << "Type gpa." << endl;
  cin >> pStudent->gpa;
  cin.get();
 
}
