// sortingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<iostream>

#include "sortingAlgos.h"
using namespace std;
int main()
{
	std::vector<std::float_t> input;
	int size;
	cout << "enter size of array to sort : ";
	cin >> size;
	input.resize(size);
	std::cout << "Enter array elements to sort and any char to start sorting: ";
	for (int i = 0; i < size; i++) {
		std::cin >> input[i];
	}
	int indexOfSort;
	std::vector<std::float_t>output(size);
	cout << "enter index of sort algorithm:" << endl;
	
	cout << "1.bubbleSort\n2.selectionSort\n3.quickSort\n4.bucketSort\n5.shellSort\n6.insertionSort\n7.mergeSort\n8.radixSort\n9.heapSort\ncountingSort";
	cin >> indexOfSort;
	std::vector<std::float_t> sortedArray;
	switch (indexOfSort) {
	case 1:
		bubbleSort(input, 0, size);
		break;
	case 2 :
		selectionSort(input, 0, size);
		break;
	case 3:
		quickSort(input, 0, size);
		break;
	case 4:
		
		input = bucketSort(input, 0, size,sortedArray);
		break;
	case 5 :
		shellSort(input, 0, size);
		break;
	case 6:
		insertionSort(input, 0, size);
		break;
	case 7:
		mergeSort(input, 0, size);
		break;
	case 8:
		radixSort(input, 0, size);
		break;
	case 9:
		heapSort(input, 0, size);
		break;
	case 10:
		countingSort(input, 0, size,sortedArray);
		break;
	default: cout << "enter correct index" << endl;
		break;

	}
	std::cout << "Sorted array elements:" << std::endl;
	for (int i = 0; i < input.size(); i++) {
		std::cout<<input[i]<< std::endl;
		
	}
	system("pause");
	return 0;
}

