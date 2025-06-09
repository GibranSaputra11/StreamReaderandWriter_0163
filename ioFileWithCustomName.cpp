#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;

    // Membaut objek output file stream
    ofstream outfile;
    // Membuka file untuk ditulisi.
    outfile.open("Contohfile.text");

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;

    // Unlimited loop untuk menulis
    while(true){
        cout << "- ";
        // Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // Loop akan berhanti jika anda memasuakn karakter q
        if (baris == "q")break;
        // Menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // Mmbuat objek input file stream
    ifstream infile;

    // Mmebuak file yang telah ditulis
    infile.open("Contohfile.text");

    cout << endl << ">= Membuka dan membaca file " << endl;
    // Jika file ada maka
    if (infile.is_open()){
        // Melakukan perulanagn setiap baris
        while (getline(infile, baris)){
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // Jika tidak ditemukan file makan akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}