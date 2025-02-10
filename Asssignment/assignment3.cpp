//Favorite Tea Input Write a program that takes the user's favorite tea as input using getline and also asks how many cups of tea they want using cin. 
//Display the result in a fun message.
//Hint: Combine cin and getline carefully to avoid input issues.

#include<iostream>

using namespace std;

int main(){
	cout<<"Enter your favorite tea: ";
	string favoriteTea;
	getline(cin, favoriteTea);
	cout<<"Enter the number of cups: ";
	int numberOfCups;
	cin>>numberOfCups;
    cout<<"Ah, a nice cup of " << favoriteTea<< "is just what you need! Here's to enjoying" << numberOfCups <<" cups of your favorite tea – may they be as delightful as your taste in tea!";
}

