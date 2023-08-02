#pragma once
#include <iostream>
#include <vector>
using namespace std;
class DataSourceInterface
{
protected:
	 void addClient(Client) = 0; 
	 void addEmployee(Employee) = 0;
	 void addAdmin(Admin) = 0;

	 vector<Client> getAllClients() = 0;
	 vector<Employee> getAllEmployees() = 0;
	 vector<Employee> getAllAdmins() = 0;

	 void removeAllClients() = 0;
	 void removeAllEmployees() = 0;
	 void removeAllAdmins() = 0;

};