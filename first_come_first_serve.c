#include<stdio.h>

int main()
{
        float burst_time[30], waiting_time[30], turnaround_time[30];
        float average_waiting_time = 0.0, average_turnaround_time = 0.0;
        int count, j, total_process;
        printf("Enter The Number of Processes To Execute:\t");
        scanf("%d", &total_process);
        printf("\nEnter The Burst Time of Processes:\n\n");
        for(count = 0; count < total_process; count++)
        {
                printf("Process [%d]:", count + 1);
                scanf("%f", &burst_time[count]);
        }
        waiting_time[0] = 0;
        for(count = 1; count < total_process; count++)
        {
                waiting_time[count] = 0;
                for(j = 0; j < count; j++)
                {
                        waiting_time[count] = waiting_time[count] + burst_time[j];
                }
        }
        printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time\n");
        for(count = 0; count < total_process; count++)
        {
                turnaround_time[count] = burst_time[count] + waiting_time[count];
                average_waiting_time = average_waiting_time + waiting_time[count];
                average_turnaround_time = average_turnaround_time + turnaround_time[count];
                printf("\nProcess [%d]\t\t%.2f\t\t%.2f\t\t%.2f", count + 1, burst_time[count], waiting_time[count], turnaround_time[count]);
        }
        printf("\n");
        average_waiting_time = average_waiting_time / count;
        average_turnaround_time = average_turnaround_time / count;
        printf("\nAverage Waiting Time = %f", average_waiting_time);
        printf("\nAverage Turnaround Time = %f", average_turnaround_time);
        printf("\n");
        return 0;
}
