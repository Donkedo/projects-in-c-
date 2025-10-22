#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    file = fopen("to_do.txt", "w");
    if (file == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    char task[100];
    for (int i = 1;; i++)
    {
        printf("enter the task %d: ", i);
        fgets(task, sizeof(task), stdin);
        if (strcmp(task, "exit\n") == 0)
        {
            break;
        }
        fprintf(file, "Task %d: %s", i, task);
    }
    fclose(file);
    return 0;
}
