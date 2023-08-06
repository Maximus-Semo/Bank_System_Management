#pragma once
#include <DataSourceinterface.hpp>
#include <FileHelper.hpp>
class FileManager : public DataSourceinterface{
public:
	 static void addClient(Client c) {
	 	FileHelper::saveClient(c)
	 }; 
	 static void addEmployee(Employee e){
	 	FileHelper::saveEmployee("Employee.txt","EmployeeLastId.txt",e)
	 };
	 static void addAdmin(Admin a) {
	 	FileHelper::saveEmployee("Admin.txt","AdminLastId.txt",a)
	 };

	 static void getAllClients() {
	 	FileHelper::getClients();
	 };
	 static void getAllEmployees(){
	 	FileHelper::getEmployees();
	 };
	 static void getAllAdmins(){
	 	FileHelper::getAdmins();
	 };
	 static void getAllData(){
	 	getAllClients();
	 	getAllEmployees();
	 	getAllAdmins();
	 }
	 static void removeAllClients(){
	 	FileHelper::clearFile("Client.txt","ClientLastId.txt");
	 };
	 static void removeAllEmployees() {
	 	FileHelper::clearFile("Employee.txt","EmployeeLastId.txt");
	 };
	 static void removeAllAdmins() {
	 	FileHelper::clearFile("Admin.txt","AdminLastId.txt");
	 };

};