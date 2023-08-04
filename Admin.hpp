#pragma once
#include <iostream>
#include <string>
#include "Employee.hpp"
using namespace std;
class Admin: public Employee 
{
	public:
		//Cons
		Admin(){}
		Admin(string name, int id, string password, double salary):Employee(name,id,password,salary){}
		void Display()
		{
			cout<<"-------------------------------------------"<<endl;
			cout << "Admin" <<endl;
			cout << "ID "<<this->id<<endl;
			cout <<"Name "<<this->name<<endl;
			cout <<"Password "<<this->password<<endl;
			cout <<"Salary "<<this->salary<<endl;
		}
		~Admin(){}
};
static vector<Admin> allAdmin;
static vector<Admin>::iterator alt;