#include<iostream>
#include"header.h"


namespace HW_5{
void shiftArray(int* arr, int size, int n) {
    using std::cout;
    int* d_arr = new int[size];
    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            d_arr[i] = arr[i];
        }
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i + n];
            //cout << arr[i] << ",";

            if (i == size - n) {
                int k = 0;
                cout << "\n";
                for (i; i < size; i++) {
                    arr[i] = d_arr[k];
                    //cout << arr[i] << ",";
                    k++;
                }
            }

        }
        delete[] d_arr;
    }


    if (n < 0) {

        int nn = n * (-1);

        for (int i = 0; i < size-nn; i++) {
            d_arr[i] = arr[i+nn];
            //cout<<d_arr[i]<<",,";
        }
        int tmp=0;
        for(int i = size-nn;i<size;i++){
            d_arr[i]=arr[tmp];
            tmp++;
            //cout<<d_arr[i]<<"*";
        }
        for(int i=0;i<size;i++){
            arr[i]=d_arr[i];
            //cout<<arr[i]<<":";
        }
        delete [] d_arr;

    }

}
}
