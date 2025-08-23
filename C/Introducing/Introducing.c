//Very Basic project | This will about introducing yourself to script
//What you learn -> User Input
#include <stdio.h>
#include <stdlib.h>

int main() //Main Code Here
{
    int age, height;
    char name[50];

    printf("[-] Welcome to the most lowest level programming language");
    printf("\n[-] Can i have your Name :");
    scanf("%49s", name);

    printf("[-] %s , What a nice name", name);
    printf("\n[-] How old are you %s :", name);
    scanf("%d", &age);

    printf("[-] %d Year's old? That's impressive", age);
    printf("\n[-] How tall are you :");
    scanf("%d", &height);

    printf("[-] That's insane! Im so envy with you");
    printf("\n======================================");
    printf("\nLet's Summary your Data");
    printf("\nName : %s", name);
    printf("\nAge : %d Year's Old", age);
    printf("\nHeight : %d Cm", height);
    printf("\n======================================");

    return 0;
}
