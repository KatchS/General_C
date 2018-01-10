#include <stdio.h>

/* Change a given string(s) to lower or upper case */

/*
    turn the given char array (string) into lower case letters only.

    word[] - a char array (string) to change.
    return - the length of the array.
*/
int lower_case(char word[]){
    int i=0;
    while(word[i] != '\0'){
        if(word[i] > 64 && word[i] < 91){ // checks if it is an upper cased letter
            word[i] += 32;
        }
        i++;
    }
    return ++i; // add one since the null terminator is not counted in the while loop
}

/*
    turn the given char array (string) into upper case letters only.

    word[] - a char array (string) to change.
    return - the length of the array.
*/
int upper_case(char word[]){
    int i=0;
    while(word[i] != '\0'){
        if(word[i] > 96 && word[i] < 123){ // checks if it is a lower cased letter
            word[i] -= 32;
        }
        i++;
    }
    return ++i; // add one since the null terminator is not counted in the while loop
}


int main(int argc, char **argv)
{
    if(argc == 1){
        puts("please enter some words when executing the program");
        return 1;
    }
    
    for(int i=1; i<argc; i++){
        lower_case(argv[i]);
        printf("%s ",argv[i]);
    }

    puts(""); // put new line

    for(int i=1; i<argc; i++){
        upper_case(argv[i]);
        printf("%s ",argv[i]);
    }

    puts(""); 
    return 0;
}
