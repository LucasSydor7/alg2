#include <iostream>

bool has_zero(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == 0) {
      return true; 
    }
  }
  return false; 
}
//o problema é que a função retorna false direto quando eh iniciada
//se o primeiro elemento não for zero, entao ele só verifica o primeiro elemento do array