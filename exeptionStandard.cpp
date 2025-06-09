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
    }
}