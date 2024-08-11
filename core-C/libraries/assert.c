#include <stdio.h>
/* #define NDEBUG      //UNCOMMENT THIS LINE TO STOP ASSERTING */
#include <assert.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n = 10;
    assert(n != 0);
    printf("First Test Passed\n");

    n = 0;
    assert(n != 0);
    printf("Second Test Passed\n");

    return 0;      
}
