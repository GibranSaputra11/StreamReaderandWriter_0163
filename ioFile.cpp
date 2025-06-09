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
        
    }
}