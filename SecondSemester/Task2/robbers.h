#ifndef robbers_h
#define robbers_h

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define N 256



int creating_table(void);
void show_all(int kol);
void show_the_living(int kol);
void show_the_richest(int kol);
void information_about_the_robber(int kol);
void add_robber(int i);
void kill_robber(int kol);

#endif /* robbers_h */
