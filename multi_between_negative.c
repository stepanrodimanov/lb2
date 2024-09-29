#include "multi_between_negative.h"
#include "index_first_negative.h"
#include "index_last_negative.h"

int multi_between_negative(int array[], int size){
        int index_first = index_first_negative(array, size);
	int index_last = index_last_negative(array, size);
	int result = 1;

	for(int i = index_first; i < index_last; i++){
		result *= array[i];
	}

	return result;
}

