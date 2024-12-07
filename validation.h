//
// Created by User on 05.12.2024.
//

#ifndef KP6_VALIDATION_H
#define KP6_VALIDATION_H

#include <stdio.h>
#include <stdbool.h>
#include "customization .h"
bool validate_integer_value(const char *message)
{
    int value = 0;
    printf("%s", message);
    do
    {
        if (scanf("%d", &value) != 1 || value < 0)
        {
            setTextColor(RED);
            printf("Please enter a positive integer value\n");
            setTextColor(WHITE);
            fflush(stdin);
        }
        else
        {
            fflush(stdin);
            return true;
        }
    }
    while (true);
}

bool validate_floating_value()
{
    double value = 0;
    do
    {
        if (scanf("%lf", &value) != 1)
        {
            setTextColor(RED);
            printf("Please enter a floating value\n");
            setTextColor(WHITE);
            fflush(stdin);
        }
        else
        {
            fflush(stdin);
            return true;
        }
    }
    while (true);
}
#endif //KP6_VALIDATION_H
