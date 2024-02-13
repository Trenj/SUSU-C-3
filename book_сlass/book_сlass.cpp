#include <iostream> #include <string>
using namespace std;

class Book 
{
public: 
	// Member Variables 
	string title; 
	string author; 
	int publicationYear; 
	float price;

	// Constructor 
	Book(string t, string a, int year, float p) : title(t), author(a), publicationYear(year), price(p) {}

	// Member Function to display book details 
	void displayDetails() 
	{ 
		cout << "Title: " << title << endl; 
		cout << "Author: " << author << endl;
		cout << "Publication Year: " << publicationYear << endl; 
		cout << "Price: $" << price << endl;
	}
	// Member Function to update the book's price 
	void updatePrice(float newPrice) 
	{ 
		price = newPrice; 
	} 
};