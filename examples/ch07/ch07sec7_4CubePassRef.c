// Passing Primitive Data Types and pointers
//Add comments to explain the code

#include <stdio.h>
#include <stdlib.h>

int cubePass1(int number);
int cubePass2(int * numberPtr);

int main(void) {

    int numberMain = 5;
    int result = 0;

    // prints numberMain int and address
    printf ("In main before cubePass1  numberMain = %d\n", numberMain);
    printf("&numberMain = %p\n", &numberMain);

    // result stores numberMain variable after it gets passed through function
    result = cubePass1(numberMain);

    // prints numberMain after being passed through cubePass1
    printf ("In main after cubePass1  numberMain = %d\n", numberMain);
    printf ("Result = %d\n", result);

    // prints numberMain then passes it through cubePass2 into result
    printf("\nIn main before cubePass2  numberMain = %d\n", numberMain);
    result = cubePass2(&numberMain);

    // prints numberMain after its been change in function cubePass2 and result, both are same
    printf("\nIn main after cubePass2  numberMain = %d\n", numberMain);
    printf("result = %d\n", result);

} // main


// function to pass by value
int cubePass1 (int number)
{
    int cube = 0;
    puts("\nIn cubePass1");
    printf("number = %d\n", number);
    printf("&number = %p\n", &number);
    cube = number * number * number;
    printf("cube  = %d\n", cube);
    number = cube;
    printf("number = %d\n", number);
    return cube;
}

// function to pass by reference
int cubePass2 (int * numberPtr)
{
    int cube = 0;
    puts ("\nIn cubePass2");
    printf("numberPtr = %p\n", numberPtr);
    printf ("*numberPtr = %d\n", *numberPtr);
    printf("&numberPtr = %p\n", &numberPtr);
    cube = (* numberPtr )* (* numberPtr )* (* numberPtr);
    // value in numberMain get changed to cube
    *numberPtr = cube;
    printf ("*numberPtr = %d\n", *numberPtr);
    return cube;
}


