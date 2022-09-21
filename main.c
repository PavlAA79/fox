#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
 char first[255], last[255];
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* remove the newline at the end */
 printf("Now enter your last name: ");
 gets(last); /* buffer overflow? what's that? */
<<<<<<< HEAD
 printf("Hello, %s %s!\n", first, last);
=======
>>>>>>> a6207a2608303f75b2b55f3f7a8d5a4f1e21caca
 return 0;
}