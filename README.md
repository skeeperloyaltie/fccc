# Process Scheduling Simulation

This project simulates process scheduling using two algorithms: First-Come-First-Serve (FCFS) and Priority Scheduling.

## Getting Started

### Prerequisites

- C compiler (e.g., GCC)
- Make (optional but recommended)

### How to Compile

If using Make:

```bash
make
```
#### If not using Make:

```bash
gcc -c fcfs.c -o fcfs.o
```
```bash
gcc -c priority.c -o priority.o
```

```bash
gcc -c test.c -o test.o
```

```bash
gcc fcfs.o priority.o test.o -o test
```

## How to Run
```bash
./test
```

### Customizing Processes
- To customize the number of processes and their attributes (burst time, priority), you can modify the main function in test.c.


### // Define the number of processes
```int n = 5;  // You can change this to the desired number of processes```

### // Define your processes and generate random burst time and priority
```
Process processes[n];
for (int i = 0; i < n; i++) {
    processes[i].pid = i + 1;
    processes[i].burst_time = rand() % 1000 + 1;  // Random burst time between 1 and 1000
    processes[i].priority = rand() % 10 + 1;      // Random priority between 1 and 10
}
```
- Feel free to customize the number of processes and adjust the range for burst time and priority.

### License
- This project is licensed under the MIT License - see the LICENSE file for details.
