#pragma once
#include <iostream>
#include <vector>
using namespace std;
class DataSourceInterface
{
protected:
	 void addClient(Client c) = 0; 
	 void addEmployee(Employee e) = 0;
	 void addAdmin(Admin a) = 0;

	 void getAllClients() = 0;
	 void getAllEmployees() = 0;
	 void getAllAdmins() = 0;

	 void removeAllClients() = 0;
	 void removeAllEmployees() = 0;
	 void removeAllAdmins() = 0;

};