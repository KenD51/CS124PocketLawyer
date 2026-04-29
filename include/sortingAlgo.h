#ifndef "SORTINGALGO_H"
#define "SORTINGALGO_H"
/**
 *  @brief Merges two adjacent rangs in an array (merge)
 *  @param from; the start of the first range
 *  @param mid; the end of the first range
 *  @param to; the end of the second range
 */

// IMPORTANT, this is our implemenetation code in class, we might need to convert it to accept objects of our item types. Still implemeneting 
void merge(std::vector<int>& a, int from, int mid, int to);

/**
 *  @brief sorts the elements in a range of an array
 *  @param from; start o the range to sort
 *  @param to; end of the range to sort
 */

// IMPORTANT, this is our implemenetation code in class, we might need to convert it to accept objects of our item types. Still implemeenting
void mergeSort(std::vector<int>& a, int from, int to);

#endif
