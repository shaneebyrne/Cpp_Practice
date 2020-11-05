#pragma once
#include "Book.h"
#include<string>
#include<vector>
#include<ctime>
#include<iostream>
#include<cstdlib>
#include<cctype>
#include"Date.h"

Book::Book(string name)
{
	setTitle(name);
}

double Book::getFee()
{
	return fee;
}

const int* Book::getMonthDays()
{
	return monthDays;
}

string Book::getTitle()
{
	return title;
}

void Book::setTitle(string namen)
{
	title = namen;
}

void Book::setDate(int month, int day, int year)
{
	Date due(month, day, year);
	dueDate = due;

}

void Book::setFee(double price)
{
	fee = price;
}

void Book::calcFee(double initialFee, int day, int month, int year)
{
	Date tardy(month, day, year);

	int daysLate = 0;
	
	daysLate = getDifference(getDueDate(), tardy);


	double lateFee = 0.00;
	if (late == true)
	{
		lateFee = daysLate * 5.00;
		lateFee = lateFee + getFee();
	}
	setFee(lateFee);
}

void Book::setStatus(bool check)
{
	late = check;
}

Date Book::getDueDate()
{
	return dueDate;
}

bool Book::getStatus()
{
	return late;
}

int Book::getDifference(Date dt1, Date dt2)
{
    // COUNT TOTAL NUMBER OF DAYS BEFORE FIRST DATE 'dt1' 

    // initialize count using years and day 
    long int n1 = dt1.getYear() * 365 + dt1.getDay();

	
    // Add days for months in given date 
    for (int i = 0; i < dt1.getMonth() - 1; i++)
        n1 += getMonthDays()[i];

    // Since every leap year is of 366 days, 
    // Add a day for every leap year 
    n1 += countLeapYears(dt1);

    // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2' 

    long int n2 = dt2.getYear() * 365 + dt2.getDay();
    for (int i = 0; i < dt2.getMonth() - 1; i++)
        n2 += getMonthDays()[i];
    n2 += countLeapYears(dt2);

    // return difference between two counts 
    return (n2 - n1);
}

// This function counts number of leap years before the 
	// given date 
int Book::countLeapYears(Date d)
{
	int years = d.getYear();

	// Check if the current year needs to be considered 
	// for the count of leap years or not 
	if (d.getMonth() <= 2)
		years--;

	// An year is a leap year if it is a multiple of 4, 
	// multiple of 400 and not a multiple of 100. 
	return years / 4 - years / 100 + years / 400;
}