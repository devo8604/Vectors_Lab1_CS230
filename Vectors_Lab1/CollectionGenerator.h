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
//*******************************************************************************
//                     USER DEFINED DATA TYPES

class CollectionGenerator
{
public:
    void stampCollectionGenerator();                            //Creates a vector of stamp objects
private:
    //Variable List
    std::vector<Stamps> stampListMaster;
    std::vector<Stamps> duplicates;
    std::vector<Stamps> usa;
    std::vector<Stamps> france;
    std::vector<Stamps> germany;
    std::vector<Stamps> spain;
    std::vector<Stamps> holland;
    
    std::string stampOriginGenerator();                         //Randomly generates stamp origin
    int stampFaceValueGenerator();                              //Randomly generates stamp face value
    void stampSorter();                                         //Sorts the stamp obects within the vector by face value
    void duplicateStampSeparator(std::vector<Stamps>& tempVec); //Removes duplicate entries out of the vector
    void stampCollectionSplitByOrigin();                        //Splits up the stamplist vector by origin
    void StampCollectionDisplayFinalResult();                   //Displays the stamp collection and total value
};
//*******************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Vectors_Lab1__CollectionGenerator__) */
//*******************************************************************************
//                      END OF HEADER FILE
//*******************************************************************************