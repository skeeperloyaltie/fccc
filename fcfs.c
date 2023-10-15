// fcfs.c
#include <stdio.h>
#include <stdlib.h>
#include "process.h"

void fcfs(Process processes[], int n) {
    int wait_time = 0, turnaround_time = 0;

    for (int i = 0; i < n; i++) {
        if (i > 0)
            wait_time += processes[i - 1].burst_time;

        turnaround_time = wait_time + processes[i].burst_time;

        printf("Process %d: Wait Time = %d, Turnaround Time = %d\n", processes[i].pid, wait_time, turnaround_time);
    }
}

// int main() {
//     // Define your processes
//     Process processes[] = {
//         {1, 10, 3},
//         {2, 5, 1},
//         // Add more processes as needed
//     };

//     int n = sizeof(processes) / sizeof(processes[0]);

//     // Call FCFS scheduling
//     fcfs(processes, n);

//     return 0;
// }
