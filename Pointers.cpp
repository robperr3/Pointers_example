// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	int* pAPointer;//declare a pointer
	int*pScore = 0;//initlaizing a pointer
	int Score = 1000;
	pScore = &Score;//assigning pointer pScore|||address of ||| a variable score 

	cout << "Asigning &Score to pScore\n";
	cout << "&Score is " << &Score << "\n";//address of score variable
	cout << "pScoire is " << pScore << "\n";//address stored in pointer
	cout << "Score is" << Score<< "\n";
	cout << "*pScore is " << *pScore << "\n"; // value pointed to by pointer(so the actual value)
	
	cout << "Adding 500 to the score\n";
	Score += 500;//this means score = score + 500
	cout << "score is" << Score << "\n";
	cout << "pScore is " << *pScore << "\n";//dereferencing the pointer

	cout << "adding 500 to *pScore\n";
	*pScore += 500; //Dereferencing the pointer here. SHOW ME THE MONEY!
	cout << "score is " << Score << "\n";
	cout << "pScore is " << *pScore << "\n\n";//Dereferencing the pointer here. SHOW ME THE MONEY!

	cout<< "Adding &newscore to pScore\n";
	int newScore = 5000;
	pScore = &newScore;// Dereferncing the pointer here. 
	cout << "&newScore is " << &newScore << "\n";
	cout << "pScore is " << pScore << "\n";
	cout << "newScore is " << newScore << "\n";
	cout << "*pScore" << *pScore << "\n";//i think this is dereferencing too.

	cout << "Assinging &str to str\n";
	string str = "score";
	string* pStr = &str;
	cout << "str is" << str << "\n";
	cout << "*pStr is " << *pStr << "\n";
	cout << "(*pStr).size() is " << (*pStr).size() << "\n";
	cout << "pStr->size() is " << pStr->size() << "\n";
	system("pause");
	return 0;
}

