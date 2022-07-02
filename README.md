# ASSIGNMENT3

Here is the requirement for this task.

![Ekran görüntüsü 2022-07-02 085130](https://user-images.githubusercontent.com/82970523/176988427-5c7b63f7-144e-46c1-9df0-0be17e368b1d.png)



Read the following instructions carefully before creating employee class!!!
The program should generate unique empId (employeeId) whenever new object is created.
Notice that empCounter is static variable, so assign the current value of empCounter to empId, so 
that each employee will have unique employee id. Then increment empCounter and
totalemployee (that will hold the total number of employees) by 1.
• Default Constructor
o accept data from keyboard for private data members (name, salary and gender)
• Parameterized constructor receives name, salary and gender from main ( ) as parameters.
• Copy Constructor copies name, salary and gender of the existing object to the new object.
• Getter methods should return the corresponding data member.
• Setter methods should receive parameter from main() and change the corresponding data 
member.
o setGender( ) accepts gender as a single character (M or F) and sets the
corresponding member to ‘MALE’ if the received character is M, FEMALE if the 
received character is F, otherwise prints ‘Invalid Character’.
o setSalary( ) accepts salary as a parameter. If the received value is not between 0 
and 10000 print ‘Invalid Value’, otherwise set the received value to corresponding 
data member.
• Destructor decrements the empCounter and totalemployee by 1.
• Initial values: empCounter should be 1 and totalemp should be 0 (zero).
<main>
• Create two objects called emp1 (should invoke the default constructor) and emp2 (use
the following values to invoke parameterized constructor. ‘Smith’, 3480.75, ‘M’)
• Create an array object called emparr1 to hold information for 10 employees. (the array
object should invoke the default constructor)
• Create another array object called emparr2 to hold information for 3 employees. (the
array object should invoke the parameterized constructor)
• Change the salary of emp2 to 14500.50. Then print only the salary of emp2 on screen
• Create a new object called emp3 to copy the values of emp2. (copy constructor should
be invoked)
• Call necessary functions to print all values of the emp3 object in row-wise.
• Call necessary functions to print all values of the array objects (emparr1 and emparr2) in 
row-wise.
• Call the function that will display the total number of employees
