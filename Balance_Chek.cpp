#include<iostream>
#include"header.h"


namespace HW_5{
bool chek_Balance(int* arr, int size) {

    int sum1 = 0;
    int sum2 = 0;
    int tmp1 = 0;
    int tmp2 = 0;
    for (int i = 0; i <= size; i++) {

        sum1 += arr[i];
        tmp1++;
        for (int j = i + 1; j < size; j++) {
            sum2 += arr[j];
            tmp2++;
        }
        if (sum1 == sum2) {
            for (int k = 0; k < tmp1; k++) {

                std::cout << arr[k] << ",";

            }
            std::cout << " || ";
            for (int h = tmp1; h <= tmp2+1; h++) {

                std::cout << arr[h] << ",";

            }


            std::cout << "\n -->Function return TRUE \n";
            return true;
        }
        else { sum2 = 0; tmp2 = 0; }



    }
    std::cout<<"\n-->";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ",";
    }
    std::cout << "\n -->Function return FALSE \n";
    return false;
}


}
