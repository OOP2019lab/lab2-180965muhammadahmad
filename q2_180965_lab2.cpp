// lab 2 question 2.cpp : Defines the entry point for the console application.
//
#include <fstream>
#include <iostream>
#include <string>
#include "gitHubUser.h"
using namespace std;
// thuis function takes input from file 
void readDataFromFile( gitHubUser * users, string filepath) 
{
	ifstream in;
	in.open(filepath);
	int size;
	in>>size;
	users=new gitHubUser[size];
	for(int i=0;i<size;i++)
	{
		in>>users[i].firstName;
		in>>users[i].username;
		in>>users[i].email;
		in>>users[i].countfolder;
	
	
	}
	in.close(filepath);



}
int main()
{

	gitHubUser *classroom;
	readDataFromFile(classroom, "input.txt");
	
	return 0;
}

