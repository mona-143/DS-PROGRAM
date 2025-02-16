// C program to print initials 
// of a name 
# include <stdio.h>  
# include <string.h> 
# include <ctype.h> 
  
// Function declaration 
void getInitials(char* name); 
  
// Driver code 
int main(void) 
{     
    // Declare an character array for  
    // entering names assuming the  
    // name doesn't exceed 31 characters 
    char name[50] = "Geeks for Geeks"; 
      
    printf("Your initials are: "); 
      
    // getInitials function prints  
    // the initials of the given name 
    getInitials(name);       
} 
  
void getInitials(char* name) 
{     
     int i = 0; 
      
     if(strlen(name) > 0 &&  
        isalpha(name[0])) 
       printf("%c ", toupper(name[0])); 
       while(name[i] != '\0') 
       { 
         if(isspace(name[i]) != 0) 
         { 
           while(isspace(name[i]) &&  
                 i <= strlen(name)) 
           { 
             i++ ;              
           } 
           printf("%c ", toupper(name[i])); 
         } 
         i++; 
       } 
    printf("\n"); 
  }
   