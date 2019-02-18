#include <iostream>
#include <string>
#include"banks.h"
using namespace std;


bank::bank(string name1, int accno1)
{
	name = name1;
	accno=accno1;
	maxtransactions=10;
	transactions=new int[maxtransactions]; //creates the pointer array of size maxtransactions
	for(int i=0;i<maxtransactions;i++)
		transactions[i]=0;
	balance=0;
	nooftransactions=0;
	balancelimit=200000;

}
void bank::print()
{
	cout<<"Account Name:"<<name<<endl;
	cout<<"Account number:"<<accno<<endl;
	cout<<"account balance:"<<balance<<endl;
	cout<<"No of Transactions:"<<nooftransactions<<endl;
	cout<<"transactions:"<<endl;
	for(int i=0;transactions[i]!=0;i++)//print in a loop untill zero comes in the value
		cout<<transactions[i]<<endl;
}
void bank::withdraw(int amount)
{
	if(amount<=balance)
	{ 
		balance=balance-amount;
	if(nooftransactions==maxtransactions) //check if there is enough balance
		increasetrancapacity();
	transactions[nooftransactions]=-amount;
	nooftransactions++;
	cout<<"transcation sucessful"<<endl;
	}
	else
		cout<< "Transaction Unsuccessful Insufficient balance"<<endl;

}
void bank::deposit(int amount)
{
	if((amount+balance)<balancelimit)
	{
		balance=balance+amount;
		if(nooftransactions==maxtransactions)
			increasetrancapacity();

		transactions[nooftransactions]=amount; //stores the transaction amount
		nooftransactions++;
		cout<<"deposit successful"<<endl;
	}
	else
		cout<<"deposit unsuccessfull-Limit exceeds"<<endl;


}

bank::~bank()
{
	delete[] transactions;
}

void bank::increasetrancapacity() // creats a new array and swap them
{
	maxtransactions=maxtransactions*2;
	int *temp,* arr=new int [maxtransactions];
	for(int i=0;i<maxtransactions;i++)
		arr[i]=0;
	for(int i =0;i<nooftransactions;i++)
		arr[i]=transactions[i];
	temp=transactions;
	transactions=arr;
	arr=temp;
	delete [] arr;

}