/*
** EPITECH PROJECT, 2021
** bistro bonus
** File description:
** secret_bases
*/

#include "my.h"
void ombre_logo(void);
void neko_logo(void);
void logo_42(void);
void turing_logo(void);
void handling_secrets(int len);
void is_this_a_base(char *base, char *secret);
void gay_agenda(void);
void sigma(void);
void lucio24(void);
void flysland(void);
void shian(void);
void handling_secrets2(int len);

void testing_for_easter_eggs(char *base)
{
    int counter = 0;
    int nbr_of_easter_eggs = 8;
    char *easter_eggs[8];

    easter_eggs[0] = "neko";
    easter_eggs[1] = "turing";
    easter_eggs[2] = "42";
    easter_eggs[3] = "gay";
    easter_eggs[4] = "anbusigma";
    easter_eggs[5] = "lucio24";
    easter_eggs[6] = "flysland";
    easter_eggs[7] = "shian";
    while (counter < nbr_of_easter_eggs) {
        is_this_a_base(base, easter_eggs[counter]);
        counter++;
    }
}

void is_this_a_base(char *base, char *secret)
{
    int counter = 0;
    int len_secret = my_strlen(secret);
    int actual_len = 0;

    while (base[counter] == secret[counter]) {
        actual_len++;
        counter++;
    }
    if (actual_len == len_secret) {
        handling_secrets(actual_len);
    }
}

void handling_secrets(int len)
{
    switch (len)
    {
    case 4:
        neko_logo();
        break;
    case 2:
        logo_42();
        break;
    case 6:
        turing_logo();
        break;
    case 3:
        gay_agenda();
        break;
    case 9:
        sigma();
        break;
    default:
        handling_secrets2(len);
    }
}

void handling_secrets2(int len)
{
    switch (len)
    {
    case 7:
        lucio24();
        break;
    case 8:
        flysland();
        break;
    case 5:
        shian();
        break;
    }

}