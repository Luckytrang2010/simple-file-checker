#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main()
{
    char path[] = "\0";
    printf("Made by 4Bytes#9688 (aka Tangly/Luckytrang2010)\nEnter the path: ");
    gets(path);
    DIR *ex = opendir(path);
    struct dirent *b;
    int amount = 0;
    if (ex != NULL) {
        printf("Directory found! Checking...");
        while (b = readdir(ex)) {
            amount++;
        }
        amount = amount -2;
        printf("\nThere are %i files/directories found in the directory.",amount);
    }
}
