#include "Functions.hpp"

//Task1

Passport::Passport(string name, string surname, int age, string citizenship):
name(name),
surname(surname),
age(age),
citizenship(citizenship)
{}

ForeignPassport::ForeignPassport(string name, string surname, int age, string citizenship,string visa, int number):
Passport(name, surname, age, citizenship),
visa(visa),
number(number)
{}

void ForeignPassport::setVisa(string newVisa)
{
    this->visa = newVisa;
}

void ForeignPassport::setNuber(int newNumber)
{
    this->number = newNumber;
}

void ForeignPassport::printDataForeignPassport()
{
    cout << "Name: " << name <<endl;;
    cout << "Surname: " << surname << endl;
    cout << "Age: " << age << endl;
    cout << "citizenship: " << citizenship << endl;
    cout << "Visa issuing country: " << visa << endl;
    cout << "Visa number: " << number << endl;
}


//Task2

Student::Student(string name, string surname, int age, string department):
name(name),
surname(surname),
age(age),
department(department){}

Aspirant::Aspirant(string name, string surname, int age, string department, string workTheme):
Student(name, surname, age, department),
workTheme(workTheme)
{}

void Aspirant::setWorkTheme(string newWorkTheme)
{
    this->workTheme = newWorkTheme;
}

void Aspirant::printAspirant()
{
    cout<<"Student Name: "<< name <<endl;
    cout<< "Student Surname: " << surname <<endl;
    cout<<"Student age: "<< age <<endl;
    cout<< "Student department: " << department <<endl;
    cout << "Aspirant work theme: " << workTheme <<endl;
}
