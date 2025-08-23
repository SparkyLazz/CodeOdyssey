// This project doesn't contain any Amazing project
// It just very Basic code
// For me right now , This is the first time I code using C
#include <stdio.h> //This is the basic library that it need for code

int main()
{
    //This where your code run
    printf("Hello World \n"); //printf is function that help you print through terminal || This where you're using this the most

    //Let's jump into variable
    // We have so much data type in here : Integer , Float , Char , Boolean || So much more but let's stick with them first

    int exampleIntegerData = 15; //How to Declare Data : DataType Name = Value; || Same like others
    float exampleFloatData = 2.0f; //This is containing Decimal number
    char exampleCharData[] = "Hello World"; // This is char with multiple char (String)
    double exampleDoubleData = 45.0; //Combination of Int and Float

    //Lets using The variable that we just made
    printf("%d\n", exampleIntegerData); //Why we put %d | Because C need format to print the Variable || %d for Integer
    printf("%f\n", exampleFloatData); // %f for Float
    printf("%lf\n", exampleDoubleData); // %lf for double
    printf("%s\n", exampleCharData); // %s for String || %c for Char

    //Let's play with data using Operator
    // '+' -> Addition -> Add together two values -> example x + y
    // '-' -> Subtract -> Subtract one value from another -> example x - y
    // '*' -> Multiplication -> Multiplies two values -> example x * y
    // '/' -> Division -> Divides one value by another -> example x / y
    // '%' -> Modulus -> Returns the division remainder -> example x % y
    // '++' -> Increment -> Increase the value of variable by 1 -> example ++x
    // '--' -> Decrement -> Decrease the value of variable by 1 -> example --x

    //Let's start in the real world
    //Increasing Section
    int xInt = 5;
    int yInt = 6;
    int totalInt = xInt + yInt;
    printf("%d + %d = %d\n", xInt, yInt, totalInt); //Should be result 11

    //Decreasing Section
    float xFloat = 1.2f;
    float yFloat = 5.6f;
    float totalFloat = xFloat - yFloat;
    printf("%f - %f = %f\n", xFloat, yFloat,totalFloat); //Should be result -4.400000

    //Multiplication
    int xInt1 = 6;
    int yInt1 = 9;
    int totalInt1 = xInt1 * yInt1;
    printf("%d * %d = %d\n", xInt1, yInt1, totalInt1); //Should be return 54

    //Division
    double xDouble = 5;
    double yDouble = 10;
    double totalDouble = xDouble / yDouble;
    printf("%lf / %lf = %lf", xDouble, yDouble, totalDouble); //Should be return 0.500000

    //Modulus Section (only works with integers)
    int xMod = 17;
    int yMod = 5;
    int totalMod = xMod % yMod;
    printf("\n%d %% %d = %d\n", xMod, yMod, totalMod); // Should be return 2

    //Increment Section
    int xInc = 10;
    printf("Before increment: %d\n", xInc);
    xInc++; // Increase by 1
    printf("After increment: %d\n", xInc); // Should be return 11

    //Decrement Section
    int xDec = 20;
    printf("Before decrement: %d\n", xDec);
    xDec--; // Decrease by 1
    printf("After decrement: %d\n", xDec); // Should be return 19


    return 0; //For not looping
}