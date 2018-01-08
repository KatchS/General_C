#include <stdio.h>

/* 
   encript the given string 
   basic incription (add one to any char)
*/

/* 
    goes through the array and manipulate each char
    
    can be change to create more complicated encription
*/
void encript(char *word)
{
    int i=0;
    while(word[i] != '\0'){ // keep going until the string ends
        word[i]++;
        i++;
    }
    printf("%s",word);
}

int main(int argc, char **argv)
{
    if(argc == 1){
        puts("please enter some words when executing the program");
        return 1;
    }
    
    for(int i=1; i<argc; i++){
        encript(argv[i]);
        if(i != argc-1){ // put a space between each word but the last
            printf(" ");
        }
    }

    puts(""); // put new line
    return 0;
}

