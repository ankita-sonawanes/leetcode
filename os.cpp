#include <stdio.h>
#include <limits.h>

void fcfs(int n, int arrival[], int burst[]);
void sjf(int n, int arrival[], int burst[], int type); // type: 0 for Non-Preemptive, 1 for Preemptive
void priorityf(int n, int arrival[], int burst[], int priority[], int type); // type: 0 for Non-Preemptive, 1 for Preemptive
void roundRobin(int n, int arrival[], int burst[], int quantum);

int main() {
    int choice, n, type, quantum;
    printf("CPU Scheduling Algorithms Menu:\n");
    printf("1. FCFS (First Come First Serve)\n");
    printf("2. SJF (Shortest Job First)\n");
    printf("3. Priority Scheduling\n");
    printf("4. Round Robin\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 5) {
        printf("Exiting program...\n");
        return 0;
    }

    printf("Enter number of processes: ");
    scanf("%d", &n);

    int arrival[n], burst[n], priority[n];
    for (int i = 0; i < n; i++) {
        printf("Process %d - Arrival Time: ", i + 1);
        scanf("%d", &arrival[i]);
        printf("Process %d - Burst Time: ", i + 1);
        scanf("%d", &burst[i]);
        if (choice == 3) { // For Priority Scheduling
            printf("Process %d - Priority: ", i + 1);
            scanf("%d", &priority[i]);
        }
    }
      if (choice == 2 || choice == 3) { // For SJF and Priority Scheduling
        printf("Enter type (0 for Non-Preemptive, 1 for Preemptive): ");
        scanf("%d", &type);
    }
      if (choice == 4) { // For Round Robin Scheduling
        printf("Enter Time Quantum: ");
        scanf("%d", &quantum);
    }
     switch (choice) {
        case 1:
            fcfs(n, arrival, burst);
            break;
        case 2:
            sjf(n, arrival, burst, type);
            break;
        case 3:
            priorityf(n, arrival, burst, priority, type);
            break;
        case 4:
            roundRobin(n, arrival, burst, quantum);
            break;
        default:
            printf("Invalid choice. Exiting...\n");
    }
return 0;
}
void fcfs(int n, int arrival[], int burst[]) {
    int completion[n], tat[n], wt[n];
    float avg_tat = 0, avg_wt = 0;

    // Sort processes by Arrival Time
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrival[j] > arrival[j + 1]) {
                int temp = arrival[j];
                arrival[j] = arrival[j + 1];
                arrival[j + 1] = temp;

                temp = burst[j];
                burst[j] = burst[j + 1];
                burst[j + 1] = temp;
            }  }  }

    // Calculate Completion Time, TAT, and WT
    completion[0] = arrival[0] + burst[0];
    tat[0] = completion[0] - arrival[0];
    wt[0] = tat[0] - burst[0];
    avg_tat += tat[0];
    avg_wt += wt[0];

    for (int i = 1; i < n; i++) {
        if (completion[i - 1] > arrival[i]) {
            completion[i] = completion[i - 1] + burst[i];
        } else {
            completion[i] = arrival[i] + burst[i];
        }
        tat[i] = completion[i] - arrival[i];
        wt[i] = tat[i] - burst[i];
        avg_tat += tat[i];
        avg_wt += wt[i];
    }

    // Calculate Average TAT and WT
    avg_tat /= n;
    avg_wt /= n;

     // Display Gantt Chart
     printf("\nGantt Chart:\n");
     printf(" ");
     for (int i = 0; i < n; i++) {
         printf("-------");
     }
     printf("\n|");
     for (int i = 0; i < n; i++) {
         printf("  P%d  |", i + 1);
     }
     printf("\n ");
     for (int i = 0; i < n; i++) {
         printf("-------");
     }
     printf("\n0");
     for (int i = 0; i < n; i++) {
         printf("      %d", completion[i]);
     }
     printf("\n");

    // Display Table
    printf("\n--------------------------------------------------");
    printf("\nProcess | Arrival | Burst | Completion | TAT | WT\n");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("  P%d    |   %d    |   %d   |    %d      |  %d  | %d\n", 
               i + 1, arrival[i], burst[i], completion[i], tat[i], wt[i]);  }
    printf("--------------------------------------------------\n");
    
// Display Average TAT and WT
    printf("\nAverage TAT: %.2f\n", avg_tat);
    printf("Average WT: %.2f\n", avg_wt);
}
void sjf(int n, int arrival[], int burst[], int type) {
    int completion[n], tat[n], wt[n], processed[n], processOrder[n];
    float avg_tat = 0, avg_wt = 0;
    
    if (type == 0) { // Non-Preemptive SJF
        for (int i = 0; i < n; i++) {
            processed[i] = 0;
        }
        int time = 0, count = 0;
        while (count < n) {
            int min_index = -1, min_burst = INT_MAX;
            for (int j = 0; j < n; j++) {
                if (arrival[j] <= time && !processed[j] && burst[j] < min_burst) {
                    min_index = j;
                    min_burst = burst[j];
                }
            }  if (min_index != -1) {
                processed[min_index] = 1;
                time = time < arrival[min_index] ? arrival[min_index] : time;
                completion[min_index] = time + burst[min_index];
                tat[min_index] = completion[min_index] - arrival[min_index];
                wt[min_index] = tat[min_index] - burst[min_index];
                processOrder[count++] = min_index;
                avg_tat += tat[min_index];
                avg_wt += wt[min_index];
                time += burst[min_index];
            } else {
                time++;
            }
        }
    } else { // Preemptive SJF
        int remaining[n], completed = 0, current_time = 0;
        for (int i = 0; i < n; i++) {
            remaining[i] = burst[i];
        }
        while (completed < n) {
            int min_index = -1, min_burst = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (arrival[i] <= current_time && remaining[i] > 0 && remaining[i] < min_burst) {
                    min_burst = remaining[i];
                    min_index = i;
                }
            }
            if (min_index != -1) {
                remaining[min_index]--;
                processOrder[completed] = min_index;
                current_time++;
                
                if (remaining[min_index] == 0) {
                    completion[min_index] = current_time;
                    tat[min_index] = completion[min_index] - arrival[min_index];
                    wt[min_index] = tat[min_index] - burst[min_index];
                    avg_tat += tat[min_index];
                    avg_wt += wt[min_index];
                    completed++;
                }
            } else {
                current_time++;
            }  }  } 
    avg_tat /= n;
    avg_wt /= n;

    // Print Gantt Chart
    printf("\nGantt Chart:\n");
    printf(" ");
    for (int i = 0; i < n; i++) {
        printf("-----");
    }
    printf("\n| ");
    for (int i = 0; i < n; i++) {
        printf("P%d | ", processOrder[i] + 1);
    }
    printf("\n ");
    for (int i = 0; i < n; i++) {
        printf("-----");
    }
    printf("\n0");
    for (int i = 0; i < n; i++) {
        printf("   %d", completion[i]);
    }
     // Print Table
    printf("\n----------------------------------------------------------\n");
    printf("| PID | Arrival Time | Burst Time | Completion | TAT | WT |\n");
    printf("----------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| P%-3d | %-12d | %-9d | %-10d | %-3d | %-3d |\n", i + 1, arrival[i], burst[i], completion[i], tat[i], wt[i]);
    }
    printf("-----------------------------------------------------------\n");
    printf("\n");
    printf("\nAverage TAT: %.2f\n", avg_tat);
    printf("Average WT: %.2f\n", avg_wt);
}

void priorityf(int n, int arrival[], int burst[], int priority[], int type) {
    int completion[n], tat[n], wt[n], processed[n], processOrder[n], orderIndex = 0;
    float avg_tat = 0, avg_wt = 0;

    if (type == 0) {
        // Non-Preemptive Priority Scheduling
        for (int i = 0; i < n; i++) {
            processed[i] = 0; // Mark all processes as unprocessed
        }
        int time = 0;
        for (int i = 0; i < n; i++) {
            int max_priority = INT_MIN, max_index = -1;
            for (int j = 0; j < n; j++) {
                if (arrival[j] <= time && !processed[j] && priority[j] > max_priority) {
                    max_priority = priority[j];
                    max_index = j;
                }
            }
              if (max_index != -1) {
                processed[max_index] = 1;
                processOrder[orderIndex++] = max_index;
                completion[max_index] = time + burst[max_index];
                time += burst[max_index];
                tat[max_index] = completion[max_index] - arrival[max_index];
                wt[max_index] = tat[max_index] - burst[max_index];
                avg_tat += tat[max_index];
                avg_wt += wt[max_index];
            } else {
                time++; // Advance time if no process is ready
            }  }
    } else {
        // Preemptive Priority Scheduling
        int remaining[n], completed = 0, current_time = 0, max_priority_index;
        for (int i = 0; i < n; i++) {
            remaining[i] = burst[i];
        }
        while (completed < n) {
            int max_priority = INT_MIN;
            max_priority_index = -1;

            for (int i = 0; i < n; i++) {
                if (arrival[i] <= current_time && remaining[i] > 0 && priority[i] > max_priority) {
                    max_priority = priority[i];
                    max_priority_index = i;
                }  }
            if (max_priority_index != -1) {
                remaining[max_priority_index]--;
                processOrder[orderIndex++] = max_priority_index;
                current_time++;

               if (remaining[max_priority_index] == 0) {
                    completion[max_priority_index] = current_time;
                    tat[max_priority_index] = completion[max_priority_index] - arrival[max_priority_index];
                    wt[max_priority_index] = tat[max_priority_index] - burst[max_priority_index];
                    avg_tat += tat[max_priority_index];
                    avg_wt += wt[max_priority_index];
                    completed++;
                }
            } else {
                current_time++; // Advance time if no process is available
            }    }  }
    avg_tat /= n;
    avg_wt /= n;

    // Print Gantt Chart
    printf("\nGantt Chart:\n");
    printf(" ");
    for (int i = 0; i < orderIndex; i++) {
        printf("-----");
    }
    printf("\n| ");
    for (int i = 0; i < orderIndex; i++) {
        printf("P%d | ", processOrder[i] + 1);
    }
    printf("\n ");
    for (int i = 0; i < orderIndex; i++) {
        printf("-----");
    }
    printf("\n0");
    for (int i = 0; i < orderIndex; i++) {
        printf("   %d", completion[processOrder[i]]);
    }
    printf("\n");
    // Print Table
    printf("\n-------------------------------------------------------------------\n");
    printf("| PID | Arrival Time | Burst Time | Priority | Completion | TAT | WT |\n");
    printf("---------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| P%-3d | %-12d | %-9d | %-8d | %-10d | %-3d | %-3d |\n", i + 1, arrival[i], burst[i], priority[i], completion[i], tat[i], wt[i]);
    }
    printf("---------------------------------------------------------------------\n");
    printf("\nAverage TAT: %.2f\n", avg_tat);
    printf("Average WT: %.2f\n", avg_wt);
}

void roundRobin(int n, int arrival[], int burst[], int quantum) {
    int remaining[n], completion[n], tat[n], wt[n];
    int time = 0, completed = 0;
    int process_sequence[1000], time_sequence[1000], sequence_index = 0;
    int is_completed[n];

    for (int i = 0; i < n; i++) {
        remaining[i] = burst[i];
        is_completed[i] = 0;  // Initialize all processes as not completed
    }
    // Execution loop
    while (completed < n) {
        int process_executed = 0;
        for (int i = 0; i < n; i++) {
            if (arrival[i] <= time && remaining[i] > 0) {
                process_executed = 1;
                process_sequence[sequence_index] = i + 1;
                time_sequence[sequence_index++] = time;

                if (remaining[i] > quantum) {
                    time += quantum;
                    remaining[i] -= quantum;
                } else {
                    time += remaining[i];
                    remaining[i] = 0;
                    completion[i] = time;
                    is_completed[i] = 1;
                    completed++;
                }  }  }
        if (!process_executed) {
            time_sequence[sequence_index++] = time;
            process_sequence[sequence_index++] = -1;  // CPU Idle
            time++;
   }        }
     // Calculate TAT & WT
    float avg_tat = 0, avg_wt = 0;
    for (int i = 0; i < n; i++) {
        tat[i] = completion[i] - arrival[i];
        wt[i] = tat[i] - burst[i];
        avg_tat += tat[i];
        avg_wt += wt[i];
    }
    avg_tat /= n;
    avg_wt /= n;
    // Print Gantt Chart
    printf("\nGantt Chart:\n ");
    for (int i = 0; i < sequence_index; i++) {
        printf("------");
    }
    printf("\n|");
    for (int i = 0; i < sequence_index; i++) {
        if (process_sequence[i] == -1)
            printf(" IDLE |");
        else
            printf(" P%-2d |", process_sequence[i]);
    }
    printf("\n ");
    for (int i = 0; i < sequence_index; i++) {
        printf("------");
    }
    printf("\n");
    // Print time labels
    printf("0");
    for (int i = 0; i < sequence_index; i++) {
        printf("     %d", time_sequence[i] + (i == sequence_index - 1 ? 0 : quantum));
    }
    printf("\n");
    // Print Table
    printf("\n----------------------------------------------------------\n");
    printf("| PID | Arrival Time | Burst Time | Completion | TAT | WT |\n");
    printf("\n----------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("| P%-3d | %-12d | %-9d | %-10d | %-3d | %-3d |\n", 
                i + 1, arrival[i], burst[i], completion[i], tat[i], wt[i]);
    }
    printf("\n----------------------------------------------------------\n");
    // Print Average TAT and WT
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat);
    printf("Average Waiting Time: %.2f\n", avg_wt);
}
