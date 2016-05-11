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


}

int HashTable::Hash(string input) const
{


}