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
//  This class is used to construct the stamp object.
//
//
//*******************************************************************************

//*******************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
//
#ifndef __Vectors_Lab1__Stamps__
#define __Vectors_Lab1__Stamps__
//
//======================================================================
//                     CONSTANT DEFINITIONS
//

//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include <string>
using namespace std;
//*******************************************************************************
//                     USER DEFINED DATA TYPES
class Stamps {
    
public:
    Stamps(string origin, int value); //Stamp object constructor
    int getFaceValue(); //get variable function
    string getOrigin(); //get variable function
private:
    //Variable List
    string countryOfOrigin;
    int faceValue;
    
    void setOrigin(string origin); //set variable function
    void setFaceValue(int value);  //set variable function
};
//*******************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Vectors_Lab1__Stamps__) */
//*******************************************************************************
//                      END OF HEADER FILE
//*******************************************************************************