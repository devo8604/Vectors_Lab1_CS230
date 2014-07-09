//*************************************************************************
// TITLE: 			   	STL Vectors Lab
// FILENAME:               lab1.cpp
// PREPARED FOR:             CS230
// PROGRAMMER(S):           Devon J. Smith
// DEVELOPMENT DATE:     	07/08/14
// COMPILER USED:            Apple LLVM Version 5.1
// TARGET PLATFORM:         Mac OS X i386 & x86_64
//=================================================================
//                           PROJECT FILES
//    <LIST ALL PROGRAM AND HEADER FILES IN THE PROJECT HERE>
//		lab1.cpp (main)
//		CollectionGenerator.cpp
//		CollectionGenerator.h
//		Stamps.cpp
//		Stamps.h
//=================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 07/08/14 Devon J. Smith        Original
//
//=================================================================

//=================================================================
//   			PROGRAM DESCRIPTION
//   This program generates 100 stamp objects with the "origin" and "faceValue"
//   attributes and stores the object in a vector. the data is then sorted by value,
//   then split into different groups by origin. Then it is displayed and the total
//   value of the stamps is displayed last. This program als has a duplicate finder
//   function in CollectionGenerator.cpp named duplicateStampSeparator.
//
// INPUTS:   None
//
// OUTPUTS:  A list of stamps is generated and grouped together by orgin and sorted by value
//           a total value for all the stamps is displayed at the end of the report.
//
//=================================================================
//                          INCLUDE FILES
#include <iostream>
#include "CollectionGenerator.h"
//
//=================================================================
//                        CONSTANT DEFINITIONS
//                             NONE
//
//=================================================================
//                      EXTERNAL CLASS VARIABLES
//                          NONE
//=================================================================

//*************************************************************************
//                     BEGINNING OF PROGRAM CODE
//*************************************************************************
using namespace std;

int main(int argc, const char * argv[])
{

    CollectionGenerator Collection;
    Collection.stampCollectionGenerator();
    return 0;
}

