#include <iostream>
using namespace std;

int main(){
    int tinggi;
    int lebar;
    cout << "Masukkan Tingggi dan lebar [x y]: ";
    cin >> tinggi >> lebar;

    for(int i = 1; i <= tinggi; i++){
        for (int j = 1; j <= lebar; j++){
            if(i == 1 || j ==1 || i == tinggi || j == lebar){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }


}