#include <iostream>
using namespace std;

// Base class
class Employee{
	protected: //Protected access specifier
    	int salary;
};

// Derived class
class Programmer:public Employee{
	public:
    	int bonus;
        void setSalary(int s){
        	salary = s;
        }
        int getSalary() {
        	return salary;
        }
};

int main() {
  Programmer obj;
  obj.setSalary(8000);
  obj.bonus = 10000;
  cout  << "Salary: " << obj.getSalary() << "\n";
  cout << "Bonus: " << obj.bonus; 
  return 0;
}
