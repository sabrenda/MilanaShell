#ifndef MILANASHELL_H
#define MILANASHELL_H

#include <stdlib.h>//malloc
#include <fcntl.h>//open, read, write, close
#include <sys/types.h>//fork
//#include <sys/wait.h>//wait, waitpid
#define DOUBLE_QUOTES 1
#define SINGLE_QUOTES 2
#define REDIRECTS 3
#define SEMICOLON 4 //;
#define PIPES 5

typedef struct s_list {//сделать цикл по листам, чтобы внутри него вызывались и выполнялись команды
    char *command;
    char *str;
    int flag;
    struct s_list *next;
} t_list;

#endif