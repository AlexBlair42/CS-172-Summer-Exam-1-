// Alex Blair
// CS 172
// Exam 1
// I affirm that all code given below was written solely by me, Alexander J Blair, and that any help I received adhered to the rules stated for this exam.

#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

class Theater
{
private:

	string Name;

	string Phone;

	double PopcornPrice = 1.99;
	double CokePrice = 0.99;

	int hour = 1;
public:

	Theater(string NAME, string PHONENUMBER){
		Name = NAME;
		Phone = PHONENUMBER;
	}

	void AddMovie(Movie& M);

	string GetMovieForHour(int hour);

	int GetShowTimeForGenre(string G);


	double GetPopcornPrice();
	double GetCokePrice();

};

