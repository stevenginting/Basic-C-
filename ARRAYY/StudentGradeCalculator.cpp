#include <iostream>
using namespace std;

int main() {
    //Data
    int nilai[5];

    int panjang = 5;
    int total = 0;
    

    // Input nilai
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
    
    int tertinggi = nilai[0];
    int terendah = nilai[0];

    //Total nilai
    for (int i = 0; i < panjang; i++){
        total += nilai[i];

        //Max nilai
        if(nilai[i] > tertinggi){
            tertinggi = nilai[i];
        }

        //Min nilai
        if(nilai[i] < terendah){
            terendah = nilai[i];
        }
    }
    //Rata rata
    float rata_rata = (float)total/panjang;

    for(int i = 0; i < panjang; i++){
        cout << "nilai ke-" << i + 1 << ": " << nilai[i] <<endl;
    }

    cout << "Nilai tertinggi adalah: " << tertinggi<<endl;
    cout << "Nilai terendah adalah: " << terendah<<endl;
    cout << "Rata rata nilai: " << rata_rata;


    return 0;
}