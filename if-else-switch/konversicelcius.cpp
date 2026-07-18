#include <iostream>
using namespace std;

int main(){
    string pilihan;
    int celcius;

    cout << "====================================="<<endl;
    cout << "Selamat datang konversi suhu celcius"<<endl;
    cout << "====================================="<<endl;

    cout << "Mau mengubah celcius ke suhu apa? pilih nomor aja[1/2/3]: "<< endl;
    cout << "1.Farenheit" <<endl
         << "2.Kelvin" <<endl
         << "3.Reamur" <<endl;
    cin >> pilihan;

    cout << "Berapa celcius yang anda punya?";
    cin >> celcius;

    if (pilihan == "1"){
        cout <<"Berapa celcius?:  ";
        double hasil = (celcius * 9 / 5) + 32;
        cout << "Hasil dari celcius ke farenheit adalah: " << hasil <<endl;
    }
    else if (pilihan == "2" ){
        cout << "Berapa celcius?: ";
        double hasil1 = celcius + 273;
        cout << "Hasil dari celcius ke kelvin adalah: " << hasil1 << endl;
    }
    else if (pilihan == "3" ){
        cout << "Berapa celcius: ";
        double hasil2 = celcius * 4 / 5;
        cout << "Hasil dari celcius ke Reamur adalah: " << hasil2 <<endl;
    }
    else {
        cout << "Pilihan tidak sesuai atau typo atau huruf harus sama";
    }
}