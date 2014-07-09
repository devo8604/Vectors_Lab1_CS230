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

//=================================================================
//                     PROGRAM OUTPUT
//
//The USA has a value of 4 cent(s)
//The USA has a value of 15 cent(s)
//The USA has a value of 18 cent(s)
//The USA has a value of 27 cent(s)
//The USA has a value of 41 cent(s)
//The USA has a value of 43 cent(s)
//The USA has a value of 50 cent(s)
//The USA has a value of 58 cent(s)
//The USA has a value of 63 cent(s)
//The USA has a value of 65 cent(s)
//The USA has a value of 79 cent(s)
//The USA has a value of 87 cent(s)
//The USA has a value of 98 cent(s)
//The USA has a value of 99 cent(s)
//
//
//The France has a value of 3 cent(s)
//The France has a value of 7 cent(s)
//The France has a value of 10 cent(s)
//The France has a value of 11 cent(s)
//The France has a value of 23 cent(s)
//The France has a value of 24 cent(s)
//The France has a value of 26 cent(s)
//The France has a value of 31 cent(s)
//The France has a value of 36 cent(s)
//The France has a value of 37 cent(s)
//The France has a value of 41 cent(s)
//The France has a value of 45 cent(s)
//The France has a value of 49 cent(s)
//The France has a value of 53 cent(s)
//The France has a value of 55 cent(s)
//The France has a value of 58 cent(s)
//The France has a value of 59 cent(s)
//The France has a value of 60 cent(s)
//The France has a value of 61 cent(s)
//The France has a value of 64 cent(s)
//The France has a value of 65 cent(s)
//The France has a value of 66 cent(s)
//The France has a value of 68 cent(s)
//The France has a value of 71 cent(s)
//The France has a value of 83 cent(s)
//The France has a value of 89 cent(s)
//
//
//The Germany stamp has a value of 3 cent(s)
//The Germany stamp has a value of 6 cent(s)
//The Germany stamp has a value of 7 cent(s)
//The Germany stamp has a value of 9 cent(s)
//The Germany stamp has a value of 11 cent(s)
//The Germany stamp has a value of 14 cent(s)
//The Germany stamp has a value of 25 cent(s)
//The Germany stamp has a value of 26 cent(s)
//The Germany stamp has a value of 29 cent(s)
//The Germany stamp has a value of 34 cent(s)
//The Germany stamp has a value of 45 cent(s)
//The Germany stamp has a value of 56 cent(s)
//The Germany stamp has a value of 61 cent(s)
//The Germany stamp has a value of 65 cent(s)
//The Germany stamp has a value of 81 cent(s)
//The Germany stamp has a value of 99 cent(s)
//
//
//The Spain stamp has a value of 8 cent(s)
//The Spain stamp has a value of 11 cent(s)
//The Spain stamp has a value of 32 cent(s)
//The Spain stamp has a value of 40 cent(s)
//The Spain stamp has a value of 41 cent(s)
//The Spain stamp has a value of 45 cent(s)
//The Spain stamp has a value of 48 cent(s)
//The Spain stamp has a value of 59 cent(s)
//The Spain stamp has a value of 60 cent(s)
//The Spain stamp has a value of 61 cent(s)
//The Spain stamp has a value of 66 cent(s)
//The Spain stamp has a value of 68 cent(s)
//The Spain stamp has a value of 74 cent(s)
//The Spain stamp has a value of 78 cent(s)
//The Spain stamp has a value of 80 cent(s)
//The Spain stamp has a value of 83 cent(s)
//The Spain stamp has a value of 87 cent(s)
//
//
//The Holland stamp has a value of 2 cent(s)
//The Holland stamp has a value of 5 cent(s)
//The Holland stamp has a value of 16 cent(s)
//The Holland stamp has a value of 23 cent(s)
//The Holland stamp has a value of 30 cent(s)
//The Holland stamp has a value of 37 cent(s)
//The Holland stamp has a value of 38 cent(s)
//The Holland stamp has a value of 59 cent(s)
//The Holland stamp has a value of 61 cent(s)
//The Holland stamp has a value of 64 cent(s)
//The Holland stamp has a value of 73 cent(s)
//The Holland stamp has a value of 76 cent(s)
//The Holland stamp has a value of 77 cent(s)
//The Holland stamp has a value of 78 cent(s)
//The Holland stamp has a value of 85 cent(s)
//The Holland stamp has a value of 90 cent(s)
//The Holland stamp has a value of 91 cent(s)
//
//These are the stamps awaiting a decent trade:
//The USA stamp has a value of 58 cent(s)
//The USA stamp has a value of 63 cent(s)
//The USA stamp has a value of 65 cent(s)
//The France stamp has a value of 3 cent(s)
//The France stamp has a value of 45 cent(s)
//The Germany stamp has a value of 99 cent(s)
//The Spain stamp has a value of 87 cent(s)
//The Holland stamp has a value of 37 cent(s)
//The Holland stamp has a value of 38 cent(s)
//The Holland stamp has a value of 77 cent(s)
//
//The total value of all of these stamps is: $49.31
//