#include <iostream>

int bubble_sort(int input_array[], int length){
    //Bubble Sort
    int temp = 0;
    for(int i2 = 0; i2 < length; i2++){
        for(int i = 0; i < length; i++){
            if(input_array[i] > input_array[i + 1]){
                temp = input_array[i];
                input_array[i] = input_array[i + 1];
                input_array[i + 1] = temp;
            }
            else{
                continue;
            }
        }
    }

    // Displaying the Output Array
    for(int j = 0; j < length; j++){
        std::cout << input_array[j] << ',';
    }
    return 0;
}


int main(){
    int array[] = {5, 2, 5, 1, 7, 4, 2, 7, 2, 8, 3, 0};
    int len = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, len);
    return 0;
}