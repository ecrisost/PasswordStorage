#pragma once

#include <iostream>

using namespace std;

class PasswordStorage
{
	private:
		string account;
		string password; 
		string website;
	public:

		//|| CONSTRUCTORS ||

		//DEFAULT CONSTRUCTOR
		//initializes all the private member variables
		PasswordStorage(); 

		//PARAMETERIZED CONSTRUCTOR
		PasswordStorage(string site, string user);

		//|| MUTATORS ||

		//SETUSERACCOUNT
		//changes the user account
		bool SetUserAccount(string olduser, string newuser);

		//SETPASSWORD
		//changes the password 
		bool SetPassword(string oldpassword, string newpassword);

		//SETWEBSITE
		//changes the webstie associated with the account
		bool SetWebsite(string site);

		//|| ACCESSORS ||

		//GETUSERACCOUNT
		//returns the useraccount
		string GetUsertAccount(string useracct);

		//GETPASSWORD
		//return the password
		string GetPassword (string pass);

		//GETWEBISTE
		//return the site
		string GetWebsite(string site);






};