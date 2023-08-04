#pragma once
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

#include <Client.hpp>
#include <Employee.hpp>
#include <Admin.hpp>

class Parser {
private:
	static vector<string> splite(string line){
		stringstream stream(line);
		string part;
		vector<string> info;
		while(getline(stream, part ,'&'))
		{
			info.push_back(part);	
		}
			return info;
	};
public:
	static Client parseToClient(string line){
		vector<string> info = splite(line);
		Client client;
		client.setId(stoi(info[0]));
		client.setId(info[1]);
		client.setId(info[2]);
		client.setId(stod(info[3]));
		return client;
	}
	static Employee parseToEmployee(string line){
		vector<string> info = splite(line);
		Employee employee;
		employee.setId(stoi(info[0]));
		employee.setId(info[1]);
		employee.setId(info[2]);
		employee.setId(stod(info[3]));
		return employee;
	}
	static Admin parseToAdmin(string line){
		vector<string> info = splite(line);
		Admin admin;
		admin.setId(stoi(info[0]));
		admin.setId(info[1]);
		admin.setId(info[2]);
		admin.setId(stod(info[3]));
		return admin;
	}
 
};