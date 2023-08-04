#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FilesHelper {
private:
public:
	FilesHelper();
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
		file << id + 1 << "&" << c.getName() <<"&"<< c.getPassword() <<"&"<< c.getBalance() <<endl;
		saveLastId("ClientLastId.txt",id+1);
		file.close();
	}
	static void saveEmployee(string fileName, string lastIdFile, Employee e){
		int id = getLast(lastIdFile);
		ofstream file;
		file.open(fileName , ios::app);
		file << id + 1 << "&" << e.getName() <<"&"<< e.getPassword() <<"&"<< e.getSalary() <<endl;
		saveLastId(lastIdFile, id+1);
		file.close();
	}
	static void getClients(){
		string line;
		ofstream file;

		file.open("Client.txt");
		while(getline,line){
			Client c = 
		}
	}
	static void getEmployees(){}
	static void getAdmins(){}
	static void clearFile(string fileName, string lastIdFile){}
	~FilesHelper();	
};