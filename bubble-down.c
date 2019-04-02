/*Jeffrey Sabo, Richard Bustamante, Brendan Behrens
CSC 335
Programming Assignment 1*/

#include <stdio.h>
#include <time.h>

void bubble_down(long* heap, long k, long n);


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

    /*Bubble Down logic*/
    for(i = n/2; i >= 0; --i) {
        bubble_down(heap, i, n);
    }


    /*Output to std out*/
    for(i = 0; i < n; ++i) {
        printf("%ld\n", heap[i]);
    }

    return 0;
}


/*Bubble down has two comparisons, parent to both children*/
void bubble_down(long* heap, long k, long n)
{
    long temp;
    long smallest = k;

    /*check for left child and compare*/
    if(2*k+1 < n) {
        if(heap[k] > heap[2*k+1]) {
            smallest = 2*k+1;
        } 
    }
    /*check for right child and compare*/
    if(2*k+2 < n) {
        if(heap[k] > heap[2*k+2] && heap[smallest] > heap[2*k+2] ) {
            smallest = 2*k+2;
        }
    }
    
    /*if current node is not the smallest, swap and recursively call bubble down on swapped node*/
    if(smallest != k){
            temp = heap[k];
            heap[k] = heap[smallest];
            heap[smallest] = temp; 
            bubble_down(heap, smallest, n);
    }
        
    return; 
}
