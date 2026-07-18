#include <iostream>
#include  <cmath>
using namespace std;

int main(){

    double tinggibadan;
    double beratbadan;

    cout<< "=================================="<<endl
        << "Selamat datang di BMI generator"<<endl
        << "=================================="<<endl;

    cout << "Silahkan masukan tinggi badan(meter) dan berat badan(kg) [x y]: ";
    cin >> tinggibadan >>beratbadan;

    double hitung = beratbadan / pow(tinggibadan,2); 
    cout << "Hasil dari BMI kamu adalah: " <<hitung <<endl;

    if (hitung < 18.5) {
        cout <<"Kamu kurus";
    }
    else if (hitung >= 18.5 && hitung <= 24.9){
        cout << "Kamu normal";
    }
    else if (hitung >=25 && hitung <= 29.9){
        cout << "Kamu kelebihan berat badan";
    }
    else if (hitung >= 30) {
        cout << "Kamu obesitas";
    }
    else {
        cout << "Masukan data dengan valid";
    }
}
