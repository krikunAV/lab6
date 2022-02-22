#include "Header.h"
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
namespace kk {
	void read(int& N, int arr[100][100])
	{
		cin >> N;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> arr[i][j];
			}
		}

	}


	void check(int arr[100][100], int N,int& max,int& min)
	{
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (arr[i][j] > max) max = arr[i][j];
				if (arr[i][j] < min) min = arr[i][j];
			}
		}
	}

	bool sum(int min, int max){
		int sum1 = 0;
		int sum2 = 0;
		while (min > 0) {
			sum1 += min % 10;
			min /= 10;
		}
		while (max > 0) {
			sum2 += max % 10;
			max /= 10;
		}
		if (sum1 > sum2) {
			if (sum1 - sum2 < 3) {
				return true;
			}
			else {
				return false;
			}
		}
		if (sum1 < sum2) {
			if (sum2 - sum1 < 3) {
				return true;
			}
			else {
				return false;
			}
		}
	}
	void rep(int arr[100][100], int N)
	{
		for (int i = 0; i < N; i++) {
			int tmp;

			for (int j = 0; j < N - 1; ++j) 
			{
				for (int p = 0; p < N - 1; ++p) 	
				{
					if (arr[p + 1][i] > arr[p][i])
					{
						tmp = arr[p + 1][i];
						arr[p + 1][i] = arr[p][i];
						arr[p][i] = tmp;
					}
				}
			}
		}
	}
	void print(int arr[100][100],int N)
	{
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
}