#include<iostream>

using namespace std;

void FillRand(int arr[], const int N);
void Print(int arr[], const int N);


void main()
{
	setlocale(LC_ALL, "Russian");
	const int N = 5;
	int arr[N]{};

	FillRand(arr, N);
	Print(arr, N);
}

void FillRand(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << "   ";
	}
	cout << endl;
}
/*
Say GitHub
*/