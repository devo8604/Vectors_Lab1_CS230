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
//=================================================================
//                        CLASS DESCRIPTION
//  This class handles the bulk of the application, it creates the stamp object,
//  sorts the vector, splits it up into groups, then displays the information.
//
//*******************************************************************************

//*******************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
//
#ifndef __Vectors_Lab1__CollectionGenerator__
#define __Vectors_Lab1__CollectionGenerator__
//
//======================================================================
//                     CONSTANT DEFINITIONS
//
//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include "Stamps.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//*******************************************************************************
//                     USER DEFINED DATA TYPES
class CollectionGenerator {
public:
    void stampCollectionGenerator(); //Creates the vector of stamp objects
private:
    //Variable List
    vector<Stamps> stampList;
    vector<Stamps> duplicates;
    vector<Stamps> usa;
    vector<Stamps> france;
    vector<Stamps> germany;
    vector<Stamps> spain;
    vector<Stamps> holland;

    string stampOriginGenerator(); //Randomly generates stamp origin
    void duplicateStampSeparator(); //Moves duplicate entries out of the vector
    int stampFaceValueGenerator(); //Randomly generates stamp face value
    void stampSorter(); //Sorts the stamp obects within the vector by face value
    void stampCollectionSplitByOrigin(); //Splits up the stamplist vector and inserts objects into appropriate vectors by origin
    void StampCollectionDisplayFinalResult(); //Displays the stamp collection and total value
};
//*******************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Vectors_Lab1__CollectionGenerator__) */
//*******************************************************************************
//                      END OF HEADER FILE
//*******************************************************************************