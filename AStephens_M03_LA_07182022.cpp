/*
Author: Austin Stephens

Date: 07/16/2022

FileName: AStephens_M02LA_07162022

Purpous: 

   A FLdrome is a word that it reads the same left to right and right to left. For this programming assignment, you need to write a C++ program that does the following:

Input: 
    String to test.

Exceptions:

    Request the user to enter a string.
    Write a recursive function that will test the string to validate if it is a FLdrome or not.
    Respond back with an output saying if the original string was a FLdrome or not.

*/


#include <iostream>
#include <cstdlib>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int FL(string String);
string pali();


int FL(string String) // test F&L
{
    bool FL;
    int Pass;
    char Last;

    Pass = String.size();

    if (String.at(0) == String.at(Pass - 1))
    {
        FL = true;
    }
    else if ((String.at(0) != String.at(Pass - 1)))
    {
        FL = false;
    }
    return FL;
}


string pali(string String)
{
    
    {
    for (int i = 0; i < String.length() / 2; i++) {
 
        if (String[i] != String[String.length() - i - 1]) {
            
            return "Second Cheak, No Palindrome Detected\n";
        }
    }
        return "Second Cheak, Palindrome Detected\n ";
}

}



int main()
{
    //VARI
    string String;

    do//inital loop
    {
        cout << "\n\n\t|Please Enter String\n";
        cin >> String;

        if (FL(String) == 1)
        {
            cout << "F&L MATCH\n";
            break;
        }
        else
        {
           cout << "Palindrome Not Detected Please Try again.\n\n";
        }
        cout << pali(String);
    } while (1);
    





    return 0;
}


