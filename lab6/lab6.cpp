#include "Header.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int N;
    int min = 99999;
    int max = 0;
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    
    int arr[100][100];

    kk::read(N, arr);
    kk::check(arr, N, max, min);
    if (kk::sum(min, max)) {
        kk::rep(arr, N);
    }
    kk:: print(arr, N);
}

