#include "Patron.h"
#include<string>
#include<vector>
#include "Book.h"
#include<ctime>
#include<iostream>
#include<cstdlib>
#include<cctype>


std::string Patron::getFirstName()
{
	return firstName;
}

std::string Patron::getLastName()
{
	return lastName;
}

vector<Book> Patron::getBooks()
{
	return books;
}

void Patron::setName(std::string first, std::string last)
{
	firstName = first;
	lastName = last;
}

void Patron::setBooks(vector<Book> libro)
{
	books = libro;
}

double Patron::calcfee()
{
	return 0.00;
}

Patron::Patron(std::string beg, std::string end)
{
	setName(beg, end);
}
