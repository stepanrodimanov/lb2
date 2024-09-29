#include <stdio.h>
#include "multi_before_and_after_negative.h" 
#include "index_first_negative.h" 
#include "index_last_negative.h"
#include "multi_between_negative.h"



int main(){ 
        int array[20]; 
        int size; 
        int value; 
        int result; 
        char symbol; 
 
        scanf("%d%c", &value, &symbol); 
 
        for(int i = 0; i < 20; i++){ 
                scanf("%d%c", &array[i], &symbol); 
                if(symbol == '\n'){ 
                        size = i; 
                        break; 
                } 
        } 
 
        switch(value){ 
                case 0:
                        printf("%d\n", index_first_negative(array, size));
                        break;
                case 1:
                        printf("%d\n", index_last_negative(array, size));
                        break;
                case 2:
                        printf("%d\n", multi_between_negative(array, size));
                        break;
                case 3: 
                        printf("%d\n", multi_before_and_after_negative(array, size));
                        break;
                default:
                        printf("Данные некорректны\n");
                        break;
	}
}
