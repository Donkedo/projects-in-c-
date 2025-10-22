#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    file = fopen("[enter the file name]", "a");//enter the file name between inverted double commas.
    if (file == NULL)
    {
        perror("Failed to open file");
        return 1;
    }
    char task[100],day[50];
    printf("when to do this task:\n");
    if (fgets(day, sizeof(day), stdin) != NULL)
    {
        size_t len = strlen(day);
        if (len > 0 && day[len - 1] == '\n')
            day[len - 1] = '\0';
    }

    fprintf(file, "i am going to do this task on:%s\n", day);
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
