#pragma once
#include <iostream>
#include "Person.hpp"
#include "Validation.hpp"
using namespace std;
class Employee : public Perosn
{
protected:
	//data members
	double salary;
public:
	//Dist
	Employee()
	{
		this->salary = 0;
	}
	Employee(string name, int id, string password, double salary):Perosn(name,id,password)
	{
		if (Validation::minSalary(salary))
		{
			this->salary = salary;
		}
	}
	//Setter
	void setSalary(double salary)
	{
		if (Validation::minSalary(salary))
		{
			this->salary = salary;
		}
	}
	//Getter
	double getSalary()
	{
		return this->salary;
	} 
	//Methods
	void Display()
	{
		cout<<"-------------------------------------------"<<endl;
		cout << "Employee" <<endl;
		cout << "ID "<<this->id<<endl;
		cout <<"Name "<<this->name<<endl;
		cout <<"Password "<<this->password<<endl;
		cout <<"Salary "<<this->salary<<endl;
	}
	~Employee(){}
};