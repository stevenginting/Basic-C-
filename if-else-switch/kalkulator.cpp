#include <iostream>
using namespace std;

int main(){
    int pilihan;
    double angka1;
    double angka2;
    char operasi;

    cout << "Selamat datang di kalkulator sederhana"<<endl;

    cout <<"Silahkan masukkan angka [x y]: ";
    cin >> angka1 >> angka2;

    cout << "Silahkan pilih operasi"<<endl;
    cout << "+" <<endl
         << "-" <<endl
         << "*" <<endl
         << "/" <<endl;
    cin >> operasi;

    switch(operasi) {
        case 1:
        case '+':
           {
            double hasil1 = angka1 + angka2;
            cout << "Hasil dari jumlah adalah: "<<hasil1 <<endl;
            break;
           } 
        case 2:
        case '-':
        {
            double hasil2 = angka1 - angka2;
            cout << "Hasil dari pengurangan adalah: "<<hasil2 << endl;
            break;
        }
        case 3:
        case '*':
        {
            double hasil3 = angka1 * angka2;
            cout << "Hasil dari perkalian adalah: " <<hasil3 << endl;
            break;
        }
        case 4:
        case '/':
        {
            double hasil4 = angka1 / angka2;
            cout << "Hasil dari pembagian adalah: "<< hasil4 << endl;
            break;
        }
        default:
        cout << "Silahkan masukan data dengan valid";
        break;
    }
}