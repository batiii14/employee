#include <string>
#include <iostream>
using namespace std;
class employee {
private:
	string name;
	double salary;
	string gender;
	int empId;
	string g;
	static int empCounter;
	static int totalemp;
public:
	employee()
	{

		cout << "Enter the name: ";
		getline(cin, name);


		cout << "Enter the gender ";
		getline(cin, gender);



		cout << "Enter the salary ";
		cin >> salary;
		getline(cin, g);
		this->empId = empCounter;
		empCounter++;
		totalemp++;
	}

	employee(string name, double salary, string gender)
	{
		this->name = name;
		this->salary = salary;
		this->gender = gender;
		this->empId = empCounter;
		empCounter++;
		totalemp++;
	}

	employee(const employee& old_obj)
	{
		this->empId = old_obj.empId;
		this->name = old_obj.name;
		this->gender = old_obj.gender;
		this->salary = old_obj.salary;
		empCounter++;
		totalemp++;
	}
	~employee()
	{
		cout << "Person with the information below has been deleted" << endl;
		cout << "Name: " << this->name << endl;
		cout << "Salary: " << this->salary << endl;
		cout << "Gender: " << this->gender << endl;
		cout << "Id: " << this->empId << endl;
		this->empId = empCounter;
		empCounter--;
		totalemp--;
	}

	void setName(string name)
	{
		this->name = name;
	}

	void setSalary(double salary)
	{
		if (salary > 0 && salary <= 10000)
		{
			this->salary = salary;
		}
		else {
			cout << "Invalid Value" << endl;
		}
	}

	void setGender(char gender)
	{
		if (gender == 'F') {
			this->gender = "FEMALE";
		}
		else if (gender == 'M') {
			this->gender = "MALE";
		}
		else {
			cout << "Invalýd Character" << endl;
		}


	}



	int getEmpId()
	{
		return empId;
	}
	string getName() {
		return name;
	}
	double getSalary() {
		return salary;
	}

	string getGender() {
		return gender;
	}

	static int getTotalEmp()
	{
		return totalemp;
	}

	void printEmp();

};

int employee::empCounter = 1;
int employee::totalemp = 0;

void employee::printEmp() {
	cout << "\nEmployee Information " << endl;
	cout << "\nId: " << this->empId << "\nName: " << this->name << "\nGender: " << this->gender << "\nSalary: " << this->salary << endl;



}