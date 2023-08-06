#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <Client.hpp>
#include <Admin.hpp>
#include <Employee.hpp>
#include <Parser.hpp>
using namespace std;

class FilesHelper {
public:
	static void saveLastId(string fileName, int id){
			ofstream file;
			file.open(fileName);
			file << id;
			file.close();
	}
	static int getLast(string fileName){
		ifstream file;
		file.open(fileName);
		int id;
		file >> id;
		file.close();
		return id;
	}
	static void saveClient(Client c){
		int id = getLast("ClientLastId.txt");
		ofstream file;
		file.open("Client.txt");
		file << id + 1 << "&" << c.getName() <<"&"<< c.getPassword() <<"&"<< c.getBalance();
		saveLastId("ClientLastId.txt",id+1);
		file.close();
	}
	static void saveEmployee(string fileName, string lastIdFile, Employee e){
		int id = getLast(lastIdFile);
		ofstream file;
		file.open(fileName , ios::app);
		file << id + 1 << "&" << e.getName() <<"&"<< e.getPassword() <<"&"<< e.getSalary();
		saveLastId(lastIdFile, id+1);
		file.close();
	}
	static void getClients(){
		string line;
		ofstream file;
		file.open("Client.txt");
		while(getline , line){
			Client c = Parser::parseToClient(line);
			allClient.push_back(c);
		}
		file.close();
	}
	static void getEmployees(){
		string line;
		ofstream file;
		file.open("Employee.txt");
		while(getline , line){
			Employee e = Parser::parseToClient(line);
			allEmployees.push_back(e);
		}
		file.close();
	}
	static void getAdmins(){
		string line;
		ofstream file;
		file.open("Admin.txt");
		while(getline , line){
			Admin a = Parser::parseToClient(line);
			allAdmin.push_back(a);
		}
		file.close();
	}
	static void clearFile(string fileName, string lastIdFile){
		fstream file1, file2;
		file1.open(fileName,ios::out,ios::trunc);
		file1.close();
		file2.open(lastIdFile, ios::out);
		file2 << 0;
		file2.close();
	}
};