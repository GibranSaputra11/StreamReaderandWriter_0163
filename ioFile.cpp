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
        if (baris == "q");
        // Menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();
}