#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void){

    int choice;
    float fahrenheit, celsius;

    printf("Temperatue Conversion\n");

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice!");
    scanf("%d", &choice);

    if (choice==1){
        printf("enter fahrenheit value: ");
        scanf("%f",&fahrenheit);
        celsius = (fahrenheit-FREEZING_POINT)*SCALE_FACTOR;
        printf("the value of celsius: %.1f\n",celsius);
    }
    else if (choice==2)
    {
        printf("enter celsius value: ");
        scanf("%f",&celsius);
        fahrenheit = celsius/SCALE_FACTOR + FREEZING_POINT;
        printf("the value of fahrenheit: %.1f\n",fahrenheit);
    }else{
        printf("invalid choice\n");
    }


    return 0;
}