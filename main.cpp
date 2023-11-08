#include <iostream>

long fib_rec_memo(int,int*);


int main(void) {
  int num;
  do{
    std::cout << "Введите число: ";
    std::cin >> num;
    if(num<0){
      std::cout << "Число должно быть неотрицательным!\n";
    }
  }while(num<0);
  int* arr = new int[num];
  arr[0] = 0;
  arr[1] = 1;
  std::cout<<"Число Фибоначчи номер "<<num<<" равно "<<fib_rec_memo(num,arr)<<"\n";
  delete [] arr;
  return 0;
}

long fib_rec_memo(int num, int* arr){
  if(num<2){
    return num;
  }else{
    if(!arr[num]){
      arr[num] = fib_rec_memo(num-1,arr) + fib_rec_memo(num-2,arr);
    }
    return arr[num];
  }
}
