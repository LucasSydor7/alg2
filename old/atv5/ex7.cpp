#include <iostream>
#include <vector>

void inverter(std::vector<int>& arr){
    int inicio =0;
    int fim = arr.size() - 1;

    while(inicio < fim){
        std::swap(arr[inicio],arr[fim]);
        inicio++;
        fim--;
    }
}

int main(){
    std::vector<int> num = {1,2,3,4,5};
    inverter(num);

    for (int a : num){
        std::cout << a << " ";
    }
    std::cout << std::endl;
    return 0;
}