#include <iostream>
#include <fstream>
#include <string>
#include "Client.hpp"
#include "Employee.hpp"
#include "Admin.hpp"
using namespace std;
int main(){
	FilesHelper::saveLastId("ClientLastId.txt",10);

}