// lab 2.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "Githubuser.h"
using namespace std;
// this fuction return the address of the user in the memory
Githubuser* searchUser( Githubuser* users, int size, string userName) 
{
	for(int i=0;i<size;i++)
	{
		if (users[i].userName==userName)
			return &users[i];
	}
	return nullptr;
}
// this function takes input from the user.Moreover there is a inline check 
void inputFromUser(Githubuser* arr, int size)
{
	for(int i=0;i<size;i++)
	{
		if(i==0)
		{
			cout<<"enter the username 1 "<<endl;
			cin>>arr[i].userName;
			cout<<"enter the email 1"<<endl;
			cin>>arr[i].email;
			cout<<"enter the first name 1 "<<endl;
			cin>>arr[i].firstname;
			cout<<"enter the password 1 "<<endl;
			cin>>arr[i].password;
		}
		else if(i==1)
		{
			cout<<"enter the username 2 "<<endl;
			cin>>arr[i].userName;
			
			while(arr[i].userName==arr[i-1].userName)
			{
				cout<<"you have entered the similar username;; enter it with a different username"<<endl;
				cin>>arr[i].userName;
			
			}
			cout<<"enter the email 2"<<endl;
			cin>>arr[i].email;
			cout<<"enter the first name 2 "<<endl;
			cin>>arr[i].firstname;
			cout<<"enter the password 2 "<<endl;
			cin>>arr[i].password;
		
		}
		else if( i==2)
		{
			cout<<"enter the username 3 "<<endl;
			cin>>arr[i].userName;
			
			while((arr[i].userName==arr[i-1].userName)||(arr[i].userName==arr[i-2].userName))
			{
				cout<<"you have entered the similar username;; enter it with a differst username"<<endl;
				cin>>arr[i].userName;
			
			}
			cout<<"enter the email 3"<<endl;
			cin>>arr[i].email;
			cout<<"enter the first name 3 "<<endl;
			cin>>arr[i].firstname;
			cout<<"enter the password 3 "<<endl;
			cin>>arr[i].password;
		
		}
		else if (i==3)
		{
			cout<<"enter the username 4 "<<endl;
			cin>>arr[i].userName;
			
			while((arr[i].userName==arr[i-1].userName)||(arr[i].userName==arr[i-2].userName)||(arr[i].userName==arr[i-3].userName))
			{
				cout<<"you have entered the similar username; enter it with a different username"<<endl;
				cin>>arr[i].userName;
			
			}
			cout<<"enter the email 4"<<endl;
			cin>>arr[i].email;
			cout<<"enter the first name 4 "<<endl;
			cin>>arr[i].firstname;
			cout<<"enter the password 4 "<<endl;
			cin>>arr[i].password;
		
		
		}

	}

}
// this function compares that whether bouth users are same or not
bool Comparison(Githubuser student1,Githubuser student2 )
{
	if((student1.email==student2.email)&&(student1.userName==student2.userName)&& (student1.firstname==student2.firstname)&&(student1.password==student2.password) )
	{
		return true;
	}
	else 
		return false;

}

int main()
{
	// doing question 1 starters
	Githubuser student1;
	Githubuser  student2;

	//taking input for student 1 and student 2

	cout<<"enter the first name of student 1"<<endl;
	cin>>student1.firstname;
	cout<<"enter the email of student 1"<<endl;
	cin>>student1.email;
	cout<<"enter the password of student 1"<<endl;
	cin>>student1.password;
	cout<<"enter the username of student 1"<<endl;
	cin>>student1.userName;
    // taking input of student 2
	cout<<"enter the first name of student 2"<<endl;
	cin>>student2.firstname;
	cout<<"enter the email of student 2"<<endl;
	cin>>student2.email;
	cout<<"enter the password of student 2"<<endl;
	cin>>student2.password;
	cout<<"enter the username of student 2"<<endl;
	cin>>student2.userName;

	//passing the student 1 and student 2 to boolean function to make comparison whether the the are equal or not

	bool flag=Comparison(student1,student2);
	if(flag==true)
	{
		cout<<"Both the githubusers are same"<<endl;
	}
	else
	{
		cout<<"githubusers are not equal"<<endl;
	
	}
    // question part a

    int size=4;
	Githubuser *classroom=new Githubuser [size];
	// taking input from the user 
	inputFromUser(classroom,size);
	
	// doing question 1 part b
	string searchusername;
	cout<<"Enter the username you want to search "<<endl;
	cin>>searchusername;
	cout<<"The address of the finded username is "<<searchUser(classroom,size,searchusername)<<endl;

	delete []classroom;
	classroom=nullptr;
	


	return 0;
}

