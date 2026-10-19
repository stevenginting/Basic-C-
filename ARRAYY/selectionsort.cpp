#include <iostream>
using namespace std;

int main() {
    int array[] = {8, 7, 9, 2, 3, 1, 5, 4, 6};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Data sebelum di iterasi"<<endl;
    for(int k = 0; k < n; k++){
        cout << array[k]<< " ";
    }
    
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(array[min] > array[j]){
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;

        cout << "setelah iterasi i = " << i << " : ";
        for(int k = 0; k < n; k++){
            cout<<array[k] << " ";
        }
        cout << endl;
    }
    return 0;
}