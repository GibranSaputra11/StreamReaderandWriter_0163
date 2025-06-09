#include <iostream>
#include <exception>
// Untuk obyek exception yang akan digunakan
#include <array>
// Untuk obyek array yang akan kita gunakan
using namespace std;

int main(){
    cout << "Awal Program" << endl; // Pennada 1
    try{
        array<int, 3> data= {10, 20, 30};
        //pesan array integer 3 elemen
        cout << data.at(5) << endl;
    }
    catch (exception& e){
        //Penangkapan mmenggunakan obyek exceptio
        cout << e.what() << endl;
        /*Akana di eksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris program yang terahir" << endl;
    /*Pennada 2 : Bahwa program berjalan tanpa berhanti meskipun terjadi kesalahn*/
    return 0;
}