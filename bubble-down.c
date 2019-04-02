#include <stdio.h>

void bubble_down(long* heap, long k, long n);

int main(int argc, char** argv)
{
//Read in from std in
    //get size n from first line
    long n;
    scanf("%ld", &n); 
    long heap[n];

    //fill up array
    long i; 
    for(i = 0; i < n; ++i) {
       scanf("%ld", &heap[i]);
    }
    
//Bubble Down logic
    for(i = n/2; i >= 0; --i) {
        bubble_down(heap, i, n);
    }
//Output to std out
    for(i = 0; i < n; ++i) {
        printf("%ld\n", heap[i]);
    }
    
    return 0;
}
//Bubble down has two comparisons, parent to both children
void bubble_down(long* heap, long k, long n)
{
    long temp;

    if(heap[k] > heap[2*k+1] && 2*k+1 < n) {
        temp = heap[k];
        heap[k] = heap[2*k+1];
        heap[2*k+1] = temp;  
        bubble_down(heap, 2*k+1, n); 
    }

    if(heap[k] > heap[2*k+2] && 2*k+2 < n) {
        temp = heap[k];
        heap[k] = heap[2*k+2];
        heap[2*k+2] = temp;  
        bubble_down(heap, 2*k+2, n); 
    }
        
    return; 
}
