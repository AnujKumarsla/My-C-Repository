
// C program to illustrate 
// strcpy() function ic C/C++ 
#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    char str1[] = "Hello Geeks!"; 
    char str2[] = "GeeksforGeeks"; 
    char str3[40]; 
    char str4[40]; 
    char str5[] = "GfG"; 
    char *j;
  
    strcpy(str2, str1); 
    j=strcpy(str3, "Copy successful"); 
    strcpy(str4, str5); 
    printf("%s\n",j);
    printf("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", 
           str1, str2, str3, str4); 
    return 0; 
} 