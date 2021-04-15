#include<iostream>
#include"header.h"

namespace HW_5{
void Fil_arr(int *arr,int size){
    int tmp=1;
    for (int i =0;i<size;i++){
      arr[i]=tmp;
      tmp +=3;
      std::cout<<arr[i]<<",";

    }
}
}
