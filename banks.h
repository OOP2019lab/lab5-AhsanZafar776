#include <iostream>
#include <string>
using namespace std;

class bank
{
	string name;
	int accno;
	float balance;
	float balancelimit;
	int * transactions;
	int nooftransactions;
	int maxtransactions;


public:
	bank(string name1,int accno1);
	~bank();
	void print();
	void withdraw(int amount);
	void deposit(int amount);
	void increasetrancapacity();

 




};