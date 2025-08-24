#include <stdio.h>
//This part two of Basic information in C
//Previous project we have learned print text, variable, and Format for each data type
//Right now we will start from User Input
int main()
{
    //You can output something using Prinf || Right now you can get input using scanf
    //For example

    //Declare variable
    int MyLovelyX;
    printf("Please write a random number :");
    scanf("%d", &MyLovelyX); //First you have to declare the Format (For int is %d) and then &VariableName

    //Let's give another example
    char MyLoveY[50];
    printf("Please write a random Word :");
    scanf("%49s", MyLoveY); //Why 49 , because make limit for 49 Bits

    //For loop || Lazy for single executing? Start loop for multiple executing in single Call
    //How to code these things
    //for (expression 1; expression 2; expression 3)
    //Lets example using real game

    //int i;
    //for (i = 0; i < 5; i ++); For this mean like i = 0 dan while i is less than 5 and i keep increasing it will execute until the i equal to 5
    for (int i = 0; i < 5; i++)
    {
        printf("%d", i); //It will run 4 times
        //Or you can do whatever you want
    }

    //For shorting method you can use While || Disclaimer : Can make endless Loop
    //while (condition)
    //{
    //  //Execute code
    //}
}