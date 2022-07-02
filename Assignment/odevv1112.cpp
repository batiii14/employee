#include <iostream>
#include <stdio.h>
#include <string>
#include "emply.h"
using namespace std;


void main() {
	employee emp1();

	employee emp2("Smith", 3480.75, "M");

	employee emparr1[10];

	employee emparr2[3] =
	{ employee("Ali SALIM",123123.3,"M"),
		employee("NUR AKI",23424,"F"),
		employee("Hikmet DONER",2455.67,"M"),

	};

	emp2.setSalary(14500.50);//won't change
	cout << "Salary of emp2: " << emp2.getSalary() << endl;

	employee emp3(emp2);

	emp3.printEmp();//printing the information of emp3

	for (int i = 0; i < 10; i++) {
		emparr1[i].printEmp();
	}

	for (int i = 0; i < 3; i++) {
		emparr2[i].printEmp();
	}

	cout << "\nTotal number of employees: " << employee::getTotalEmp() << endl;
	system("pause");
}