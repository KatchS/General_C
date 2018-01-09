#include <stdio.h>

/* 
   encript the given string 
   basic incription (add one to any char)

   (can be used as tamplate to more complicated encryptions)
*/

/* 
    goes through the array and manipulate each char.
    can be change to create more complicated encription
    
    *word - char array representing a given word (string)
    return - the length of the array
*/
int encrypt(char *word)
{
    int i=0;
    while(word[i] != '\0'){ // keep going until the string ends
        word[i]++;
        i++;
    }
    return ++i; // add one since the NIL terminator is not being count in the loop
}

int main(int argc, char **argv)
{
    if(argc == 1){
        puts("please enter some words when executing the program");
        return 1;
    }
    
    for(int i=1; i<argc; i++){
        encrypt(argv[i]);
        printf("%s ",argv[i]);
    }

    puts(""); // put new line
    return 0;
}

