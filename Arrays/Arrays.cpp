// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//std::cout << "Hello World!\n";

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "rus");
    const int n = 5;
    

    

    int arr[n];// = { 3,5,8,13,21 };
    cout << "Введите значения элементов (5 штук)";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        
        cout << arr[i] << "\t";
    }
    cout << endl;
}


