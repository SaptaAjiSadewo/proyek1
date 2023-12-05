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


}

void tambahkanFilm(Film daftarFilm[], int &jumlahFilm) {
    if (jumlahFilm < 10) {
        Film film;
        cin.ignore(); // Clear the input buffer
        cout << "Masukkan judul: ";
        getline(cin, film.judul);
        cout << "Masukkan pemeran utama: ";
        getline(cin, film.pemeranUtama);

    } else {
        cout << "Maaf, kapasitas daftar film sudah penuh." << endl;
    }
}

void updateFilm(Film daftarFilm[], int jumlahFilm) {
    if (jumlahFilm == 0) {
        cout << "Daftar film kosong. Tidak ada data untuk diupdate." << endl;
        return;
    }

    cout << "Masukkan judul film yang ingin diupdate: ";
    string judulUpdate;
    cin.ignore(); // Clear the input buffer
    getline(cin, judulUpdate);

    for (int i = 0; i < jumlahFilm; ++i) {
        if (daftarFilm[i].judul == judulUpdate) {
            cout << "Masukkan informasi film yang baru:" << endl;
            cout << "Judul: ";
            getline(cin, daftarFilm[i].judul);
            cout << "Pemeran Utama: ";
            getline(cin, daftarFilm[i].pemeranUtama);
            return;
        }
    }

    cout << "Film dengan judul '" << judulUpdate << "' tidak ditemukan." << endl;
}

void hapusFilm(Film daftarFilm[], int &jumlahFilm) {
    if (jumlahFilm == 0) {
        cout << "Daftar film kosong. Tidak ada data untuk dihapus." << endl;
        return;
    }

    cout << "Masukkan judul film yang ingin dihapus: ";
    string judulHapus;
    cin.ignore(); // Clear the input buffer
    getline(cin, judulHapus);

    for (int i = 0; i < jumlahFilm; ++i) {
        if (daftarFilm[i].judul == judulHapus) {
            // Move the last film to the current position to "delete" the film
            daftarFilm[i] = daftarFilm[jumlahFilm - 1];
            jumlahFilm--;

            cout << "Film berhasil dihapus!" << endl;
            return;
        }
    }

    cout << "Film dengan judul '" << judulHapus << "' tidak ditemukan." << endl;
}

int main() {
    Film daftarFilm[10];
    int jumlahFilm = 0;

    while (true) {
        cout << "===== Aplikasi Manajemen Data Film =====" << endl;
        cout << "1. Tampilkan Daftar Film" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih operasi (0-4): ";

        int pilihan;
        cin >> pilihan;
        cin.ignore(); // Clear the input buffer

        switch (pilihan) {
            case 1:
                if (jumlahFilm == 0) {
                    cout << "Daftar film kosong." << endl;
                } else {
                    cout << "===== Daftar Film =====" << endl;
                    for (int i = 0; i < jumlahFilm; ++i) {
                        tampilkanFilm(daftarFilm[i]);
                    }
                }

                return 0;
            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    }

    return 0;
}

