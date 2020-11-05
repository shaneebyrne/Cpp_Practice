#pragma once
#include "Libary.h"
#include "Patron.h"
#include<string>
#include<vector>
#include<ctime>
#include<iostream>
#include<cstdlib>
#include<cctype>

const vector<Patron> Libary::getMembers()
{
	return members;
}

const vector<Book> Libary::getInventory()
{
	return inventory;
}

Libary::Libary(vector<Patron> list, vector<Book> libros)
{
	setBooks(libros);
	setMembers(list);

}

void Libary::setMembers(vector<Patron> list)
{
	members = list;
}

void Libary::setBooks(vector<Book> collection)
{
	inventory = collection;
}

void Libary::addMember(string start, string end)
{
	Patron person(start, end);
	members.push_back(person);
}

void Libary::addBook(string name)
{
	Book libro(name);
	inventory.push_back(libro);
}