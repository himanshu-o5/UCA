#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

 /* 
    We will try to find the starting time and ending time, then get the differnce between those two.
    2 ways - CPU Time and Actual Time.
  */


/* Struct timespce has 2 variables in it.
 * - Elapsed Time in seconds
 * - Elapsed Time in Nano seconds.
*/


/*
    timespce_get() will work on all device, whereas clock_gettime() will only work on MAC and Linux.
 */

int main(){
    // STARTING TIMESTAMP
    struct timespec begin1;
    timespec_get(&begin1, TIME_UTC);
    struct timespec begin2;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin2);


    // YOUR TASK
    int x = 15;
    for(long long i=0; i<100000; i++){
        x = x*2;
        /* printf("Hello");  //Printing on terminal takes time, So Wall Time > CPU time */
    }
    /* sleep(2); //sleep(2) will takes 2 more second on wall time. */


    // ENDING TIMESTAMP
    struct timespec end1;
    timespec_get(&end1, TIME_UTC);
    struct timespec end2;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end2);

    // DIFFERENCE BETWEEN TIMESPECS
    double time_spent1 = (end1.tv_sec - begin1.tv_sec) + (end1.tv_nsec - begin1.tv_nsec) / 1000000000.0;
    double time_spent2 = (end2.tv_sec - begin2.tv_sec) + (end2.tv_nsec - begin2.tv_nsec) / 1000000000.0;

    printf("Wall Time it took to execute : %lf\n", time_spent1);
    printf("CPU Time it took to execute : %lf\n", time_spent2);

    return 0;
}


// SIR'S METHOD BELOW


/* int main() { */
/*     clock_t start_time, end_time; */
/*     double cpu_time_used; */
/**/
/*     // Record the start time */
/*     start_time = clock(); */
/**/
/*     // Place your code to measure execution time here */
/*     // For example, let's simulate some computation */
/*     int sum = 0; */
/*     for (int i = 1; i <= 1000000; ++i) { */
/*         sum += i; */
/*     } */
/**/
/*     // Record the end time */
/*     end_time = clock(); */
/**/
/*     // Calculate the CPU time used in seconds */
/*     cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC; */
/**/
/*     printf("Sum: %d\n", sum); */
/*     printf("CPU Time Used: %f seconds\n", cpu_time_used); */
/**/
/*     return 0; */
/* } */
