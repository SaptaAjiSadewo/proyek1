#include <iostream>
#include <string>

using namespace std;

struct Film {
    string judul;
    string pemeranUtama;
    double rating;
    int ratingUsia;
    string genre;
    int tahunRilis;
    string sutradara;
};

void tampilkanFilm(const Film &film) {
    cout << "Judul: " << film.judul << endl;
    cout << "Pemeran Utama: " << film.pemeranUtama << endl;
    cout << "Rating: " << film.rating << endl;
    cout << "Rating Usia: " << film.ratingUsia << endl;
    cout << "Genre: " << film.genre << endl;
    cout << "Tahun Rilis: " << film.tahunRilis << endl;
    cout << "Sutradara: " << film.sutradara << endl;
    cout << "--------------------------" << endl;
}