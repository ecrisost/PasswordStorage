#include "hashtable.h"

HashTable::HashTable()
{
	size = 0;
	maxsize = 101;
	table = new SLinkedList<PasswordStorage>[maxsize];
	status = new SLinkedList<int>[maxsize];
}

HashTable::HashTable(int n)
{
	size = 0;
	maxsize = n;
	table = new SLinkedList<PasswordStorage>[2*maxsize];
	status = new SLinkedList<int>[2*maxsize];
}

//check if the number is prime
bool HashTable::Prime(int n)
{
	int i = 0;

	if(n <= 1)
		return false;
	else if (n <= 3)
		return true;
	else if(n % 2 == 0 || n % 3 == 0)
		return false;

	i = 5;
	while(i*i < n)
	{
		if (n % i == 0 || n % (i+2) == 0)
			return false;
		i = i+6;
	}

	return true;
}

//return the smallest prime number after n
int HashTable::SmallestPrime(int n)
{
	
	while(!(Prime(n)))
	{
		n++;
		Prime(n);
	}

	return n;

}
//use horner's method to hash the string input
int HashTable::Hash(string input) const
{
	int h= 0;
	for(int i = 0; i < input.length(); i++)
	{
		h = ((h * 26) + input[i]) % input.length();
	}

	return h;

}

bool HashTable::Resize(PasswordStorage acct) 
{
	int old_max = maxsize;
	int h = 0;
	maxsize = SmallestPrime(2*maxsize);
	SLinkedList<PasswordStorage>* new_table = new SLinkedList<PasswordStorage>[maxsize];

	for(int i = 0; i < old_max; i++)
	{

	}

}