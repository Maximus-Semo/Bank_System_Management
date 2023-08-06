#include <iostream>
#include <fstream>
#include <string>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
#include "FilesHelper.hpp"
using namespace std;
int main(){
	FilesHelper::saveLastId("ClientLastId.txt",10);

}