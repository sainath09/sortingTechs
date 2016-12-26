// sortingAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<vector>
#include<iostream>

#include "sortingAlgos.h"

int main()
{
	std::vector<std::float_t> input;
	int size;
	std::cin >> size;
	input.resize(size);
	std::cout << "array elements" << std::endl;
	for (int i = 0; i < size; i++) {
		
		std::cin >> input[i];
	}

	std::vector<std::float_t>output = bucketSort(input, 0, 100);
	//std::vector<std::float_t>output = insertionSort(input);
	std::cout << "Sorted array elements:" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout<<output[i]<< std::endl;
		
	}
	system("pause");
	return 0;
}

