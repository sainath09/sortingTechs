
#include "stdafx.h"
using namespace std;
#include "sortingAlgos.h"
std::vector<std::float_t> bubbleSort(std::vector<std::float_t> &sortingArray, int begin, int end) {
	for (int i = 0; i < sortingArray.size(); i++) {
		for (int j = 0; j < sortingArray.size()-1; j++) {
			if (sortingArray[j] > sortingArray[j + 1]){
				std::swap(sortingArray[j], sortingArray[j + 1]);
			}
		}
	}
	return sortingArray;
}

std::vector<std::float_t> selectionSort(std::vector<std::float_t> &sortingArray, int begin, int end) {
	float_t key = 9999999;
	int j_temp = 0;
	for (int i = 0; i < sortingArray.size(); i++) {
		key = 9999999;
		for (int j = i; j < sortingArray.size(); j++) {
			if (key > sortingArray[j]) {
				key = sortingArray[j];
				j_temp = j;
			}
		}
std::swap(sortingArray[i], sortingArray[j_temp]);
	}
	return sortingArray;
}
std::vector<std::float_t> quickSort(std::vector<std::float_t> &sortingArray, int start, int end) {
	if (start >= end){
		return sortingArray;
	}
	int num = sortingArray[start];
	//int num = rand() % end-1;
	int i = start - 1;
	int j = end + 1;
	while (true)
	{
		do
		{
			i++;
		} while (i<end && sortingArray[i] < num);

		do
		{
			j--;
		} while (j >= 0 && sortingArray[j] > num);

		if (i >= j)
			break;

		swap(sortingArray[i], sortingArray[j]);
	}
	quickSort(sortingArray, start, j);
	quickSort(sortingArray, j + 1, end);
	return sortingArray;
}
std::vector<std::float_t> bucketSort(std::vector<std::float_t> &sortingArray, int begin, int end, std::vector<std::float_t> &sortedArray) {
	int noOfBuckets = end / 10;
	vector<float_t>* b = new vector<float_t>[noOfBuckets];
	for (int i = 0; i < sortingArray.size(); i++) {
		int index = (int)sortingArray[i] / 10;
		b[index].push_back(sortingArray[i]);
	}
	for (int i = 0; i < noOfBuckets; i++) {
		insertionSort(b[i], 0, b[i].size());
	}
	//not an in memory sort.
	for (int i = 0; i < noOfBuckets; i++)
		for (int j = 0; j < b[i].size(); j++)
			sortedArray.push_back(b[i][j]);
	return sortedArray;
}

std::vector<std::float_t> shellSort(std::vector<std::float_t> &sortingArray, int begin, int end) {
	return sortingArray;
}
std::vector<std::float_t> insertionSort(std::vector<std::float_t> &sortingArray,int begin,int end) {
	if (sortingArray.empty()) return sortingArray;
	int j;
	for (int i = begin; i < end; i++) {
		j = i;
		while (j > 0 && sortingArray[j] < sortingArray[j - 1]) {
			swap(sortingArray[j], sortingArray[j - 1]);
			j--;
		}
	}
	return sortingArray;
}
std::vector<std::float_t> mergeSort(std::vector<std::float_t> &sortingArray, int begin, int end) {
	if (begin < end)
	{
		int middle = begin + (end - begin) / 2;
		mergeSort(sortingArray, begin, middle);
		mergeSort(sortingArray, middle + 1, end);
		//merge(arr, l, m, r);
	}
	return sortingArray;
}
std::vector<std::float_t> radixSort(std::vector<std::float_t> &sortingArray, int begin, int maxNoOfDigits) {

	return sortingArray;
}
std::vector<std::float_t> heapSort(std::vector<std::float_t> &sortingArray, int begin, int end) {
	return sortingArray;
}
std::vector<std::float_t> countingSort(std::vector<std::float_t> &sortingArray, int begin, int end, std::vector<std::float_t> &sortedArray) {
	int max = -99999;
	for (int i = 0; i < sortingArray.size(); i++) 
		if (sortingArray[i] > max) 
			max = sortingArray[i];
	std::vector<float_t> countingArray;
	countingArray.resize(max+1);
	std::vector<float_t> sortedArray;
	sortedArray.resize(sortingArray.size());
	for (int i = 0; i < sortingArray.size(); i++) {
		countingArray[sortingArray[i]]++;
	}
	for (int i = 0; i < countingArray.size() - 1; i++) {
		countingArray[i + 1] += countingArray[i];
	}
	for (int i = sortingArray.size() - 1; i >= 0; i--) {
		countingArray[sortingArray[i]]--;
		sortedArray[countingArray[sortingArray[i]]] = sortingArray[i];
	}
	return sortedArray;
}





