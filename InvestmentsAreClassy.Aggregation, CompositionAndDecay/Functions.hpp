# pragma once
#include <iostream>
using namespace std;

// Task1
class Passport
{
protected:
    string name;
    string surname;
    int age;
    string citizenship;
public:
    Passport(string name, string surname, int age, string citizenship);
    
};

class ForeignPassport : public Passport
{
private:
    string visa;
    int number;
public:
    ForeignPassport(string name, string surname, int age, string citizenship,string visa, int number);
    void setVisa(string newVisa);
    void setNuber(int newNumber);
    void printDataForeignPassport();
    
    
};

//Task2

class Student
{
protected:
    string name;
    string surname;
    int age;
    string department;
public:
    Student(string name, string surname, int age, string department);
};

class Aspirant : public Student
{
private:
    string workTheme;
public:
    Aspirant(string name, string surname, int age, string department, string workTheme);
    void setWorkTheme(string newWorkTheme);
    void printAspirant();
};
