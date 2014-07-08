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
#include "CollectionGenerator.h"
#include "Stamps.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//*******************************************************************************
//             Definition of member functions for class Entry
//*******************************************************************************

vector<Stamps> stampList;
vector<Stamps> duplicates;
vector<Stamps> usa;
vector<Stamps> france;
vector<Stamps> germany;
vector<Stamps> spain;
vector<Stamps> holland;

void CollectionGenerator::stampCollectionGenerator()
{
    
    
    srand((unsigned) time(NULL));
    
    for(int listSize = 0; listSize < 100; listSize++)
    {
    
    stampList.push_back(Stamps(stampOriginGenerator(), stampFaceValueGenerator()));

    }
    
    stampSorter();
    duplicateStampSeparator();
    stampCollectionSplitByOrigin();
    StampCollectionDisplayFinalResult();
}

string CollectionGenerator::stampOriginGenerator()
{
    
    string originReturn = "";
    int originPicker = 0;
    
    originPicker = rand() % 5 + 1;
        
    switch (originPicker) {
        case 1:
            originReturn = "USA";
            break;
        case 2:
            originReturn = "France";
            break;
        case 3:
            originReturn = "Germany";
            break;
        case 4:
            originReturn = "Spain";
            break;
        case 5:
            originReturn = "Holland";
            break;
            
    }
    return originReturn;
}

int CollectionGenerator::stampFaceValueGenerator()
{
    int valuePicker = 0;
    return valuePicker = rand() % 100 + 1;
}

void CollectionGenerator::stampSorter()
{
    bool sorted = false;
    Stamps* stampBuffer;
    
    while (sorted == false) {
        sorted = true;
        for (int i = 0; i < stampList.size()-1; i++) {
            if (stampList[i].getFaceValue() > stampList[i+1].getFaceValue()) {
                *stampBuffer = stampList[i];
                stampList[i] = stampList[i+1];
                stampList[i+1] = *stampBuffer;
                sorted = false;
            }
        }
    }
}

void CollectionGenerator::duplicateStampSeparator() {
    
    bool duplicatesRemoved = false;
    
    while (duplicatesRemoved == false) {
        duplicatesRemoved = true;
        for (int i = 0; i < stampList.size(); i++) {
            if (stampList[i].getOrigin() == stampList[i+1].getOrigin()) {
                if (stampList[i].getFaceValue() == stampList[i+1].getFaceValue()) {
                    duplicates.push_back(stampList[i]);
                    stampList.erase(stampList.begin() + i);
                    i--;
                    duplicatesRemoved = false;
                }
            }
        }
    }
}


void CollectionGenerator::stampCollectionSplitByOrigin()
{
    for (int i = 0; i < stampList.size(); i++) {
        string originBuffer = "";
        originBuffer = stampList[i].getOrigin();
        
        if (originBuffer == "USA") {
            usa.push_back(stampList[i]);
        } else if (originBuffer == "France") {
            france.push_back(stampList[i]);
        } else if (originBuffer == "Germany") {
            germany.push_back(stampList[i]);
        } else if (originBuffer == "Spain") {
            spain.push_back(stampList[i]);
        } else
            holland.push_back(stampList[i]);
    }
}

void CollectionGenerator::StampCollectionDisplayFinalResult()
{
    double totalValue = 0;
    
    for (int i = 0; i < usa.size(); i++) {
        cout << "The " << usa[i].getOrigin() << " has a value of " << usa[i].getFaceValue() << " cent(s)" << endl;
        totalValue += usa[i].getFaceValue();
    }
    
    cout << endl << endl;
    
    for (int i = 0; i < france.size(); i++) {
        cout << "The " << france[i].getOrigin() << " has a value of " << france[i].getFaceValue() << " cent(s)" << endl;
        totalValue += france[i].getFaceValue();
    }
    
    cout << endl << endl;
    
    for (int i = 0; i < germany.size(); i++) {
        cout << "The " << germany[i].getOrigin() << " stamp has a value of " << germany[i].getFaceValue() << " cent(s)" << endl;
        totalValue += germany[i].getFaceValue();
    }
    
    cout << endl << endl;
    
    for (int i = 0; i < holland.size(); i++) {
        cout << "The " << holland[i].getOrigin() << " has a value of " << holland[i].getFaceValue() << " cent(s)" << endl;
        totalValue += holland[i].getFaceValue();
    }
    cout << endl << "These are the stamps awaiting a decent trade: " << endl;
    for (int i = 0; i < duplicates.size(); i++) {
        cout << "The " << duplicates[i].getOrigin() << " has a value of " << duplicates[i].getFaceValue() << " cent(s)" << endl;
        totalValue += duplicates[i].getFaceValue();
    }
    cout << endl << "The total value of all of these stamps is: " << "$" << totalValue/100 << endl;
}
