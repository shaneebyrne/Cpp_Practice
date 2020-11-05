#include "Date.h"
#include <iostream>
#include <string>
using namespace std;


Date::Date()
{
	//Initialize variables.
	month = 0, day = 0, year = 0;
}
Date::Date(int Month, int Day, int Year)
{
	month = Month;
	day = Day;
	year = Year;
}
void Date::setDay(int d)
{
	if (d < 1 && d > 31)
		cout << "The day is invalid" << endl;
	else
		day = d;

}
void Date::setMonth(int m)
{
	if (m < 1 && m > 12)
		cout << "The month is invalid" << endl;
	else
		month = m;

}
void Date::setYear(int y)
{
	if (y < 1950 && y > 2020)
		cout << "The year is invalid" << endl;
	else
		year = y;
}
void Date::showDate1()
{
	cout << month << " /" << day << " /" << year << endl;
}
void Date::showDate2()
{
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };
	cout << monthName[month - 1] << "  " << day << "  " << year << endl;
}
void Date::showDate3()
{
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };
	cout << day << "  " << monthName[month - 1] << "  " << year << endl;
}


int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}


int Date::getYear()
{
	return year;
}

/*int main()
{
	int Month, Day, Year;
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };


	cout << "Please enter a month (between 1 - 12) " << endl;
	cin >> Month;

	cout << "Please enter a day (between 1 - 31) " << endl;
	cin >> Day;

	cout << "Please enter a year (between 1950 - 2020) " << endl;
	cin >> Year;


	Date newDate(Month, Day, Year);
	newDate.showDate1();
	newDate.showDate2();
	newDate.showDate3();

	cin.get();
	cin.get();
	return 0;
	
}
*/