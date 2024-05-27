#include <bits/stdc++.h>
#include <string>

using namespace std;

class Movie{
private:
    string title;
    string director;
    string genre;
    int release_year;
    int duration_minutes;
    string language;
    string rating;
    vector<string> actors;
public:
    Movie(){}
    Movie(string s_title, string s_director, string
    s_genre, int i_release_year, int
    i_duration_minutes, string s_language, double
    d_rating, vector<string> _actors){
    title = s_title;
    director = s_director;
    genre = s_genre;
    release_year = i_release_year;
    duration_minutes = i_duration_minutes;
    language = s_language;
    rating = d_rating;
    actors = _actors;
}
void readDetails(string s_title, string
    s_director, string s_genre, int i_release_year, int
        i_duration_minutes, string s_language, double
    d_rating, vector<string> _actors){
    title = s_title;
    director = s_director;  
    genre = s_genre;
    release_year = i_release_year;
    duration_minutes = i_duration_minutes;
    language = s_language;
    rating =d_rating;
    actors = _actors;
}
void displayDetails(){
    cout << "Title: " << title << endl;
    cout << "Director: " << director << endl;
    cout << "Genre: " << genre << endl;
    cout << "Release Year: " << release_year <<
endl;
    cout << "Duration (minutes): " <<
    duration_minutes << endl;
    cout << "Language: " << language << endl;
    cout << "Rating: " << rating << endl;
    cout << "Actors: ";
    for (const auto& actor : actors) {
    cout << actor << ", ";
    }
    cout << endl;
    }
    bool search(string keyword){
    return title.find(keyword) != string::npos
    || director.find(keyword) != string::npos ||
    genre.find(keyword) != string::npos ||
    language.find(keyword) != string::npos ||
    rating.find(keyword) != string::npos ||
    any_of(actors.begin(), actors.end(),
    [keyword](const string& actor) { return
    actor.find(keyword) != string::npos; });
}
int getReleaseYear(){
return release_year;
}
void setTitle(string& s_title){
title = s_title;
}
void setDirector(string& s_director){
director = s_director;
}
void setGenre(string& s_genre){
genre = s_genre;
}
void setReleaseYear(int i_release_year){
release_year = i_release_year;
}
void setDurationMinutes(int i_duration_minutes){
duration_minutes = i_duration_minutes;
}
void setLanguage(string& s_language){
language = s_language;
}
void setRating(double &d_rating){
rating = d_rating;
}
};
bool compareByReleaseYear(Movie &m1,Movie &m2){
return m1.getReleaseYear() <
m2.getReleaseYear();
}
int main(){
int n;
cout << "Enter the number of movies: ";
cin >> n;
vector<Movie> movies;
for (int i = 0; i < n; ++i){
Movie m;
string title, director, genre, language;
double rating;
int release_year, duration_minutes;
vector<string> actors;
cout << "Enter details for Movie " << i + 1
<< ":" << endl;
cout << "Title: ";
cin.ignore();
getline(cin, title);
cout << "Director: ";
getline(cin, director);
cout << "Genre: ";
cin >> genre;
cout << "Release Year: ";
cin >> release_year;
cout << "Duration (minutes): ";
cin >> duration_minutes;
cout << "Language: ";
cin >> language;
cout << "Rating: ";
cin >> rating;
cout << "Actors : ";
string actor;
while (getline(cin, actor)){
actors.push_back(actor);
}
m.readDetails(title, director, genre,
release_year, duration_minutes, language, rating,
actors);
movies.push_back(m);
}
sort(movies.begin(), movies.end(),
compareByReleaseYear);
cout << "\nMovies details:" << endl;
for (auto &movie: movies){
movie.displayDetails();
}
}