#include <iostream>
#include <stdlib.h>
#include "header.h"
#include "function.cpp"




int main()
{/// № 1
    const int size = 5;
    int arr[size]{1,0,0,1,0};
    int *parr=arr;
    HW_5::invert(parr,size);

// с темплэйтами видимо этот номер не проходит...
    //void(*p_inv)(T1*,T2);

    std::cout<<"\n";

/// № 2

    const int size2 = 8;
        int arr2[size2]{};
        int* parr2 = arr2;

        void(*p_fil)(int*,int);
        p_fil = HW_5::Fil_arr;
        p_fil(parr2,size2);

        //HW_5::Fil_arr(parr2,size2);


/// № 3

    const int size3 = 4;
        int arr3[size3]{ 10,89,8,4 };
        int* parr3 = arr3;

        bool(*p_chek)(int*,int);
        p_chek = HW_5::chek_Balance;

        //HW_5::chek_Balance(parr3, size3);

        p_chek(parr3,size3);

// № 4

        using std::cout;

            const int size4 = 5;
            int arr4[size4]{ 1,2,3,4,5 };
            int* parr4 = arr4;
            /*std::cout << " Enter the value 'n' = ";
            int n;
            std::cin >> n;*/
            int n = -3;


            void(*p_shift)(int*,int,int);
            p_shift = HW_5::shiftArray;
            p_shift(parr4,size4,n);
            //HW_5::shiftArray(parr4, size4,n);
            cout << "\n";
            for (int i = 0; i < size4; i++) {
                std::cout << arr4[i] << ",";
            }

    return 0;
}
