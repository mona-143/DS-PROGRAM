// C Program to Remove leading zeros 
// using for loop 
#include <stdio.h> 
#include <string.h> 
int main() 
{ 
    // input 
    char a[1000] = "0001234"; 
    int i, c = -1; 
    
    // finding the all leading zeroes from the given string 
    // and removing it from the string 
    for (i = 0; i < strlen(a); i++) { 
        if (a[i] != '0') { 
            c = i; 
            break; 
        } 
    } 
    // printing the string again after removing the all 
    // zeros 
    for (i = c; i < strlen(a); i++) { 
        printf("%c", a[i]); 
    } 
    return 0; 
}