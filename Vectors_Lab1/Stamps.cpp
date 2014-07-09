//*************************************************************************
// TITLE: 			   	STL Vectors Lab
// FILENAME:               lab1.cpp
// PREPARED FOR:             CS230
// PROGRAMMER(S):           Devon J. Smith
// DEVELOPMENT DATE:     	07/08/14
// COMPILER USED:            Apple LLVM Version 5.1
// TARGET PLATFORM:         Mac OS X i386 & x86_64
//=================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 07/08/14 Devon J. Smith        Original
//
//*******************************************************************************
//                               CONSTANTS
//
//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include "Stamps.h"
using namespace std;
//*******************************************************************************
//             Definition of member functions for class Entry
//*******************************************************************************

string countryOfOrigin;
int faceValue;

Stamps::Stamps(string origin, int value)
{
    setOrigin(origin);
    setFaceValue(value);
}

string Stamps::getOrigin() {
    return countryOfOrigin;
}

void Stamps::setOrigin(string origin)
{
    countryOfOrigin = origin;
}

int Stamps::getFaceValue()
{
    return faceValue;
}

void Stamps::setFaceValue(int value)
{
    faceValue = value;
}