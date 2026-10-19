#include <iostream>
#include <array>
using namespace std;

void sort(int array[], int size);

int main(){
    int array[] = {9,1,4,5,7,8,4,3,6,0};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    for(int element : array){
        cout << element << " ";    
    }
    return 0;
}
void sort(int array[],int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; i < i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = array[j];

            }
        }
    }
}