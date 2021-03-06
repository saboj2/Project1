/*Jeffrey Sabo, Richard Bustamante, Brendan Behrens
CSC 335
Programming Assignment 1*/

#include <stdio.h>
#include <time.h>

void bubble_up(long* heap, long k);


int main(int argc, char** argv)
{
    /*Read in from std in*/
    /*get size n from first line*/
    long n;
    scanf("%ld", &n); 
    long heap[n];

    /*fill up array*/
    long i; 
    for(i = 0; i < n; ++i) {
       scanf("%ld", &heap[i]);
    }

    /*Bubble Up Heap Construction*/ 
    for(i = 1; i < n; i++) {
       if(heap[i] < heap[(i-1)/2])
            bubble_up(heap, i); 
    }


    /*Output to std out*/
    for(i = 0; i < n; ++i) {
        printf("%ld\n", heap[i]);
    }

    return 0;
}

/*Bubble up has one comparison, child to parent*/
void bubble_up(long* heap, long k)
{
    /*swap two values that need to swapped*/
    long temp = heap[k];
    heap[k] = heap[(k-1)/2];
    heap[(k-1)/2] = temp;
      
    /*check to see if its parent is still bigger, swap recursively if it is*/
    if((k-3)/4 >= 0) {
        if(heap[(k-1)/2] < heap[(k-3)/4]) {
            bubble_up(heap, (k-1)/2);
        }
     }   
    return;
}
