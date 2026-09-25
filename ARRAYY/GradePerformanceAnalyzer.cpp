#include <iostream>
#include <array>
using namespace std;

int main(){
    int nilai[10];
    int panjang = 10;
    int total = 0;
    int lulus = 75;

    // Array lulus & tidak lulus
    int NilaiLulus[10];
    int NilaitidakLulus[10];

    //Jumlah lulus dan tidak lulus
    int jumlahlulus = 0;
    int jumlahtdklulus = 0;


    cout << "Masukkan nilai [10]: ";
    for(int i = 0; i < panjang; i++){
        cout << "Masukkan nilai ke-" << i + 1 << " :";
        cin >> nilai[i];
    }

    int tertinggi = nilai[0];
    int terendah = nilai[0];

    for(int i = 0; i < panjang; i++){
        total += nilai[i];

        if (nilai[i] >= lulus){
            NilaiLulus[jumlahlulus] = nilai[i];
            jumlahlulus++;
        }
        else {
            NilaitidakLulus[jumlahtdklulus] = nilai[i];
            jumlahtdklulus++;
        }

        if(nilai[i] > tertinggi){
            tertinggi = nilai[i];
        }
        
        if (nilai[i] < terendah){
            terendah = nilai[i];
        }
    }
    float ratarata = (float)total/panjang;

    cout << "==============="<<endl;
    cout << "NIlai total: "<<total <<endl;
    cout << "Nilai rata rata: " <<ratarata <<endl;

    cout<< "NIlai Lulus: " <<endl;
    for(int i = 0; i< jumlahlulus; i++){
        cout << NilaiLulus[i] << " ";
    }
    cout << "Nilai tidak lulus: "<<endl;
    for(int i = 0; i <jumlahtdklulus; i++){
        cout << NilaitidakLulus[i];
    }
}