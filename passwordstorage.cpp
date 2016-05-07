#include "passwordstorage.h"

//default constructor
PasswordStorage::PasswordStorage()
{
	account = "user";
	password = "password";
	website = "site";
}

//set user account
void PasswordStorage::SetUserAccount(string newuser)
{
	account = newuser;
}

//set password
bool PasswordStorage::SetPassword(string oldpassword, string newpassword)
{
	if(newpassword != " " && oldpassword == password)
	{
		password = newpassword;
		return true;
	}
	return false;
}

//
void PasswordStorage::SetWebsite(string site)
{
	website = site;
}

string PasswordStorage::GetUserAccount() const
{
	return account;
}

string PasswordStorage::GetPassword() const
{
	return password;
}

string PasswordStorage::GetWebsite() const
{
	return website;
}

bool PasswordStorage ::operator==(const PasswordStorage& acct) const
{
	return (account == acct.account);
}

bool PasswordStorage::operator!=(const PasswordStorage& acct) const
{
	return !(*this == acct);
}