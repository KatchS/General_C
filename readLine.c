#include <stdio.h>

/*
 an operation for getting user input (line)
 * this method comes to deal with two problems:
 * 1. memory allocation: when getting input from user you will not know how much he will insert, which make it 
 * difficult to allocate memory for it.
 * 2. handling incorrect number of input characters: if the user insert to much (flush issues) or to little character (unhandle string formatting), 
 * it could lead to problem with reading from the stream.
*/

/*
    buf[] - an array of char to except the input
    max_char - an int that specify how many character are to be expected
    return - an int represent the number of character that was inserted to buf
*/
int read_line(char buf[], int max_char)
{
    char ch;
    int read = 1, i = 0;
    while(read){
        if((ch = getchar()) == '\n' || ch == EOF){
            read = 0;
        }else if(i < max_char - 1){
            buf[i] = ch;
            i++;
        }
    }
    buf[i] = '\0';
    return i;
}