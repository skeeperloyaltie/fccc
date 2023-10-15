#include <stdio.h>
#include <stdlib.h>
#include <time.h>  // Include the time.h header for seeding the random number generator
#include "process.h"

// Function prototypes
void fcfs(Process processes[], int n);
void priority(Process processes[], int n);

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Define the number of processes
    int n = 5;  // You can change this to the desired number of processes

    // Define your processes and generate random burst time and priority
    Process processes[n];
    for (int i = 0; i < n; i++) {
        processes[i].pid = i + 1;
        processes[i].burst_time = rand() % 1000 + 1;  // Random burst time between 1 and 1000
        processes[i].priority = rand() % 10 + 1;      // Random priority between 1 and 10
    }

    // Call FCFS scheduling
    printf("FCFS Scheduling:\n");
    fcfs(processes, n);

    // Call priority scheduling
    printf("\nPriority Scheduling:\n");
    priority(processes, n);

    return 0;
}
