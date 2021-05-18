#include <iostream>
#include <string>
using namespace std;

//Base class
class Employee {
	public:
    		void department() { 
    			cout << "This is base class- Employee class.\n";
		}
};
//derived class
class Brand : public Employee {
	public :
		void department(){
          		cout << "This is derived clss -brand dept\n";
      		}
};
//Derived class
class Cse : public Employee{
	public:
  		void department() {
        		cout << "This is derived class - CSE dept";
        	}
};
int main() {
  Employee employeeObj;
  Brand brandObj;
  Cse cseObj;
  employeeObj.department();
  brandObj.department();
  cseObj.department();
  return 0;
}