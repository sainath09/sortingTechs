#pragma once
#ifndef SORTINGALGOS_H
#define SORTINGALGOS_H
#include<vector>

std::vector<std::float_t> bubbleSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> selectionSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> quickSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> bucketSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> shellSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> insertionSort(std::vector<std::float_t> &sortingArray);
std::vector<std::float_t> mergeSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> radixSort(std::vector<std::float_t> &sortingArray, int begin, int end);
std::vector<std::float_t> heapSort(std::vector<std::float_t> &sortingArray, int begin, int end);




#endif // !sortingAlgos.h


