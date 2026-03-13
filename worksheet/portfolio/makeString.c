
/*
Name: Mathew Carling
Student ID: 201990775
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // appropiate data to hold up to 10*4 chars + n-1 "-"s
    char newword[64] = "";
    // initilises to first arg
    for (int i = 1; i < argc; i++) {
        strcat(newword, argv[i]);
        
        if (i < argc - 1) {
            strcat(newword, "-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}
