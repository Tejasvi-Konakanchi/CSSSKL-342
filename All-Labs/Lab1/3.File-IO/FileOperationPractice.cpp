/*
 *  Course: CSSSKL342A
 *  Lab 1: Toolchains, type conversion, references, file I/O
 *
 *  FileOperationPractice.cpp
 *  Author: Tejasvi Konakanchi
 *  Date: 1/10/2025
 *
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
  ifstream inputFile;
  int number;

  // Replace 1 with 2 & 3 while testing
  inputFile.open(textfile1.txt);

  if (!inputFile) {
    cout << "Error! Could not open file." << endl;
  }

  while (inputFile >> number) {
    cout << number << endl;
  }

  inputFile.close();
  return 0;
}

//I am unable to run this code. I'm still trying to figure out why and how. 
// Due to the time constraint this is all I can submit. 
// I will make sure all my next assignments are complete, I apologize for the current inconcenience.
// The .txt file for this exercise is also empty.
// I implore professor Sung to offer me partial credit for my finished work.
// Thank you so much for your consideration.