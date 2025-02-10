//Tea Information Display Write a program that declares variables to store the type of tea, its price per kilogram (float), and its rating (char). 
//Use data types effectively and print them in a formatted output using escape sequences.
//Hint: Use in for new lines and " to quote the tea name.

#include<iostream>

using namespace std;

int main(){
   string typeOfTea;
   cout<<"Enter the type of Tea: \n";
   getline(cin, typeOfTea);
   
   float pricePerKilogram;
   cout<<"Enter the price per kilogram:\n";
   cin>>pricePerKilogram;
   
   char rating;
   cout<<"Enter the rating:\n";
   cin>>rating;
   
   cout<<"The name of the tea is \""<<typeOfTea<<"\" and its price per kilogram is "<<pricePerKilogram<<" has rating of "<<rating;
}
