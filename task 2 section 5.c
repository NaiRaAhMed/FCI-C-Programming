// (Body Mass Index Calculator) Create a BMI calculator application that reads the user�s weight in pounds and height in inches (or, if you prefer, the user�s weight in kilograms and height in meters), then calculates and displays the user�s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight , height , Bmi ;
    printf ("Enter the weight : \n") ;
    scanf ("%f" , &weight);
    printf ("Enter the height : \n") ;
    scanf ("%f" , &height);
    Bmi = ((weight)/ (height*height)) ;
    printf ("Bmi = %f" , Bmi) ;
    return 0;
}
