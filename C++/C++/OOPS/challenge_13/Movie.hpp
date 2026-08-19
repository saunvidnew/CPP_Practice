#ifndef MOVIE_H
#define MOVIE_H
using namespace std;
#include<string>
#include<iostream>
#include<vector>

class Movie {
private:
    string name;
    static int watched_times;
    string rating;

public:
    Movie(){
        name="None";
        watched_times=0;
        rating="None";

    }

    

    // int increment_watchedcount(string n, int c, string r);

    // vector<string> display();

};

class Movies{
private:
    vector<Movie> movie;

public:
    void add_movies( vector<Movie> v, string n, int c, string r){
        v.push_back(n,c,r);
        cout << "Movie "<<n<<"added to the list."<<endl;

    }

};

#endif