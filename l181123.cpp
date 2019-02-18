#include <iostream>
#include <string>
#include"banks.h"

using namespace std;

int main()
{
	bank myaccount("John Doe",549002); //declaring the class 
	myaccount.print();
	myaccount.withdraw(2000);//withdrawing money
	myaccount.deposit(250000);//depositing the amount
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.withdraw(2000);
	myaccount.withdraw(2000);
	myaccount.withdraw(2000);
	myaccount.withdraw(2000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.deposit(5000);
	myaccount.withdraw(2000);
	myaccount.withdraw(2000);
	myaccount.withdraw(2000);
	myaccount.withdraw(2000);
	myaccount.print(); // printing 
	

}