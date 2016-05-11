#pragma once

#include "passwordstorage.h"
#include "slinkedlist.h"
#include <string>
#include <cmath>

#define EMPTY = 0;
#define FULL = 1;
#define FREE = 2;

using namespace std;


class HashTable
{
	private:
		SLinkedList<PasswordStorage>* table;
		SLinkedList<int>* status;
		int size;
		int maxsize;

		//hash functions using horner's method
		int Hash(string input) const;

		//resize the hash if it's filled
		bool Resize(PasswordStorage acct);

		void CopyArray(const HashTable &ht);
		void DeleteArray();

	public:

		//default constructor
		HashTable();

		//parameterized constructor
		HashTable(int n);

		//copy constructor
		HashTable(const HashTable &ht);

		//destructor
		~HashTable();

		//insert 
		bool Insert(PasswordStorage acct);

		//remove
		bool Remove(PasswordStorage acct);
		
		
};
