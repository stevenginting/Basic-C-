#include <iostream>
#include <vector>
using namespace std;

int main(){
vector<int>data;
    int jumlah,nilai,target;
    

    cout << "Berapa banyak data/elemen yang ingin dimasukkan?";
    cin >> jumlah;

    for(int i = 0; i < jumlah;i++){
        cout << "Masukkan data ke-" << i + 1<<": ";
        cin >> nilai;
        data.push_back(nilai);
    }

    cout << "Tentukan baris nilai target: ";
    cin >> target;
    int nilai_target = data[target];

    for(int i = 0; i < jumlah; i++){
        if (i == nilai_target){
            continue;
        }

        bool targetditemukan = false;
        if(nilai_target == data[i]){
            targetditemukan = true;
            cout << "Baris ke-" << i + 1 << "(indeks" <<i << ")nilainya sama <" << data[i] << ")"<<endl;
        }
        else {
            cout << "Baris ke-" << i + 1 << " (indeks " << i << ") nilainya BEDA (" << data[i] << ")" << endl;
        }
    }

    return 0;
}