#include <iostream>
#include "header.h"

namespace HW_5{
template <class T1,class T2>
void invert(T1 *arr,T2 size)
{
    for (int i = 0; i < size; i++){
        arr[i] = arr[i]-1;
        arr[i] *= arr[i];
        std::cout<<arr[i]<<",";

    }


}

}


