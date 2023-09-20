#include "cs50.h"
#include <stdio.h>

int main(void)
{
    string answer = get_string("whats ur name? ");
    printf("hello %s\n", answer);
}