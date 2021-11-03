/*
** EPITECH PROJECT, 2021
** bistro bonus
** File description:
** logo
*/

#include "my.h"

void print_logo2(void);
void studio_logo(void);
void clear_screen(int use_case);

void print_logo(void)
{
    my_putstr("\e[31m▄▄▄▄    ██▓  ██████ ▄▄▄█████▓ ██▀███   \
    ▒█████   ███▄ ▄███▓ ▄▄▄     ▄▄▄█████▓ ██▓ ▄████▄\n");
    my_putstr("\e[31m▓█████▄ ▓██▒▒██    ▒ ▓  ██▒ ▓▒▓██ ▒ ██▒▒██▒\
      ██▒▓██▒▀█▀ ██▒▒████▄   ▓  ██▒ ▓▒▓██▒▒██▀ ▀█  \n");
    my_putstr("\e[91m▒██▒ ▄██▒██▒░ ▓██▄   ▒ ▓██░ ▒░▓██ ░▄█ ▒▒██░  \
    ██▒▓██    ▓██░▒██  ▀█▄ ▒ ▓██░ ▒░▒██▒▒▓█    ▄ \n");
    my_putstr("\e[91m▒██░█▀  ░██░  ▒   ██▒░ ▓██▓ ░ ▒██▀▀█▄  ▒██\
       ██░▒██    ▒██ ░██▄▄▄▄██░ ▓██▓ ░ ░██░▒▓▓▄ ▄██▒\n");
    my_putstr("\e[33m░▓█  ▀█▓░██░▒██████▒▒  ▒██▒ ░ ░██▓ ▒██▒░ ████▓▒░▒██▒\
       ░██▒ ▓█   ▓██▒ ▒██▒ ░ ░██░▒ ▓███▀ ░\n");
    my_putstr("\e[33m░▒▓███▀▒░▓  ▒ ▒▓▒ ▒ ░  ▒ ░░   ░ ▒▓ ░▒▓░░ ▒░▒░▒░ ░ ▒░\
       ░  ░ ▒▒   ▓▒█░ ▒ ░░   ░▓  ░ ░▒ ▒  ░\n");
    my_putstr("\e[93m ▒░▒   ░  ▒ ░░ ░▒  ░ ░    ░      ░▒ ░ ▒░  ░ ▒ ▒░ ░  ░\
          ░  ▒   ▒▒ ░   ░     ▒ ░  ░  ▒   \n");
    print_logo2();
}

void print_logo2(void)
{
    my_putstr("\e[93m ░    ░  ▒ ░░  ░  ░    ░        ░░   ░ ░ ░ ░ ▒  ░      ░\
         ░   ▒    ░       ▒ ░░        \n");
    my_putstr("\e[96m░       ░        ░              ░         ░ ░\
             ░         ░  ░         ░  ░ ░      \n");
    my_putstr("\e[96m\n");
    my_putstr("\e[96m  ░                      \
                                                        ░\n");
    my_putstr("\e[0m");
}

void studio_logo(void)
{
    my_putstr("\e[36m __\n");
    my_putstr("\e[36m /|            /                     /            | /\n");
    my_putstr("\e[36m( |       ___    ___  ___  ___  ___ (___       ___|   __\
    \n");
    my_putstr("\e[36m  | |   )|   )| |   )|   )     |___ |    |   )|   )| |  )\
    \n");
    my_putstr("\e[36m  | |__/ |    | |  / |__/       __/ |__  |__/ |__/ | |_/\
    \n");
    my_putstr("\e[36m                     __/\n");
}

void clear_screen(int use_case)
{
    if (use_case == 0) {
        my_putstr("\e[1;1H\e[2J");
    } else {
        my_putstr("\e[1;1H\e[2J");
        print_logo();
    }
}
