// CodeHunter.cpp : Defines the entry point for the console application.
// This is a code hunter program. Try to identify what is wrong with it
// Brak point means that it is stopping here.
// The yellow pointer is what is about to be executed

#include "stdafx.h"
#include <iostream> // in out stream
#include <string> // allows us to count characters

using namespace std;


int main() // main function
{
	string textToAnalyze; // checks the string 
	int vowels = 0;// counts the vowels and I took out foo which wasn't being used
	int consonants = 0; // counts the consonants
	int digits = 0; // counts the digits
	int spaces = 0; // counts the spaces
	int lengthOfStringSubmittedForAnalysis = 0; // counts the lengith of the entire sentence
	int unknownCharacters = 0; // counts the chracters not labed below
	int checkSum = 0; // checks the length of eveything and I took out bar whhich isn't being used/

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;
	getline(cin, textToAnalyze);// puts in the sentence and starts filtering it through the if statments

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' || // checks for capital and lower case vowels then adds one to vowels for each that it finds
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels;
		}
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z')) // it does the if statement above and anything that doesn't fit gets put here or filtered down
		{
			++consonants;
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9') // it does the if statement above and anything that doesn't fit gets put here or filtered down
		{
			++digits;
		}
		else if (textToAnalyze[i] == ' ') // it does the if statement above and anything that doesn't fit gets put here or filtered down
		{
			++spaces;
		}
		else // it does the if statement above and anything that doesn't fit gets put here or filtered down
		{
			++unknownCharacters;
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); // checks to see if the two numbers are equal
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; // addes eveything together to be used for the next if statment

	cout << "Vowels: " << vowels << endl; // output vowels
	cout << "Consonants: " << consonants << endl; // output consonants
	cout << "Digits: " << digits << endl; // output digits 
	cout << "White spaces: " << spaces << endl; // output spaces
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl; // output lengthOfStringSubmittedForAnalysis 
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl; // output unknownCharacters
	cout << "Checksum: " << checkSum << endl; // output checkSum

	if (checkSum == lengthOfStringSubmittedForAnalysis) // if eveything has been fixed this shows
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else // if not everything is fixed this shows
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause"); // pauses before ending the program so the outputs can be read

	return 0;
}