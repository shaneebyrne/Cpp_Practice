/*#pragma once
#include<string>
#include<vector>
#include<ctime>
#include<iostream>
#include<cstdlib>
#include<cctype>

using namespace std;

double mtoKconverter(double );
double ktoMconverter(double );

int main()
{
    std::cout << "Hello World!\n";
    cout << "Hello, Program!" << endl;
    cout << "Here we go!" << endl;
    cout << "Please enter your first name (followed by 'enter'):\n";
    string first_name;
    cin >> first_name;
    cout << "Hello, " << first_name << "!\n" << endl;

    cout << "Please enter what kilometers you wish to convert to Miles: " << endl;
    double kilometers;
   cin >> kilometers;
    cout << "There are " << mtoKconverter(kilometers) << " Miles in " << kilometers << " Kilometers" << endl;


    cout << "Please enter what Miles you wish to convert to Kilometers: " << endl;
    double miles;
    cin >> miles;
    cout << "There are " << ktoMconverter(miles) << " Kilometers in " << kilometers << " Miles" << endl;
    
   /* vector<int> v = { 5,7,9,4,6,8 };
    for (int i= 0; i < v.size();i++)
    {
        cout << v[i] << endl;
    }
    

    vector<double> ve = { 1.1, 2.3, 22.4, 5.6, 15.9, 12.11 };

    Distance dis(ve);

    cout << "Mean = " << dis.calcMean(ve) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


double mtoKconverter(double kilometers)
{
    double miles = 0.621371 * kilometers;
    return miles;
}

double ktoMconverter(double miles)
{
    double kilometers = miles/1.609344;
    return kilometers;
}

/*
Read a sequence of double values into a vector. Think of each value as the distance between two ceties along a given route. 
Compute and print the greatest distance between two neighboring cities. Find and print mean distance between two neighboring cities.


*/