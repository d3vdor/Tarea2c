#ifndef __UTILS_H__
#define __UTILS_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>
#include <math.h>

void pause_programm();
void clean_screen();
void timer(int tiempo);

void pause_programm()
{
    system("pause");
}

void clean_screen()
{
    system("cls || clean");
}

void timer(int tiempo)
{
    sleep(tiempo);
}

#endif // __UTILS_H__