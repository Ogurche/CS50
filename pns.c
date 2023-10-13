#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include "cs50.h"

int main(void)
{ 
    int n;
    
    n = get_int("Num: ");
     
    for (int i = 0; i<n ;i++)
    {
        printf ("/‾‾‾\\   /‾‾‾\\\n|   |   |   |\n\\___/   \\___/\n");
        // printf("|   |   |   |\n");
        // printf("\\___/   \\___/\t");
        for (int i=0; i<10; i++)
        {
            printf("    |   |\n");
        }
        printf("    \\___/\n");
        printf("Количество нарисованных пинусов: %i\n", i+1);
        printf("Чем я занимаюсь в этой жизни?\n");
        sleep(2);
    }
    return 0;
}
