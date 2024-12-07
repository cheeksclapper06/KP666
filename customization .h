//
// Created by User on 05.12.2024.
//

#ifndef KP6_CUSTOMIZATION_H
#define KP6_CUSTOMIZATION_H

#define RED 4
#define GREEN 2
#define BLUE 1
#define WHITE 15

#include <windows.h>

void setTextColor(const int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
#endif //KP6_CUSTOMIZATION_H
