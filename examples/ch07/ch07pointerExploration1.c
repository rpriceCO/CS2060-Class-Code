/*******************
 Understanding pointers

 Add comments to explain the code
**************/

#include <stdio.h>


int main ()
{
    // Initalize houseNum
    int houseNum = 13;
    int calcHouseNum1 = 0;
    int calcHouseNum2 = 0;
    int *houseNumPtr = &houseNum;

    // prints the variable houseNum
    printf("houseNum %d\n", houseNum);

    // prints the address for the variable houseNum
    printf("&houseNum %p\n\n", &houseNum);

    // prints the variable that houseNumPtr is pointing to
    printf ("*houseNumPtr  %d\n", *houseNumPtr);

    // prints the address for houseNum using the houseNumPtr
    printf ("houseNumPtr %p\n\n", houseNumPtr);

    // prints the address that is for the houseNumPtr itself
    printf ("&houseNumPtr %p\n\n", &houseNumPtr);

    // 13+13, gets the variables using the *
    calcHouseNum1 =  *houseNumPtr + *houseNumPtr;

    // prints 26
    printf("*houseNumPtr + *houseNumPtr is %d\n\n", calcHouseNum1);

    // 2*13, uses the ptr to get variable again
    calcHouseNum2 = 2 * (*houseNumPtr);

    // prints 26
    printf("2 * (*houseNumPtr) is %d\n\n", calcHouseNum2);

    // the first address that is printed is the address for houseNum
    // and the second address is the same as well
    printf("\n&*houseNumPtr = %p"
           "\n*&houseNumPtr = %p\n", &*houseNumPtr, *&houseNumPtr);

    return 0;
}
