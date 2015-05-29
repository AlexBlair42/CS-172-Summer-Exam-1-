#include <iostream>
#include <string>
#include "Theater.h"
#include "Movie.h"



void Theater::AddMovie(Movie& MOVIE){
	Movie Title = MOVIE;
}

string Theater::GetMovieForHour(int hour){
	string MoviePoster = Movie::GetTitle();
	return MoviePoster;
}

int Theater::GetShowTimeForGenre(string Genre){
	int ShowtimeGenre = Movie::GetShowTime();
	return ShowtimeGenre;
}


double Theater::GetPopcornPrice(){
	return PopcornPrice;
}
double Theater::GetCokePrice(){
	return CokePrice;
}

