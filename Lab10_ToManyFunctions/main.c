//
//  main.c
//  Lab10_ToManyFunctions
//
//  Created by Lugtu, Jihan Tyler on 10/15/18.
//  Copyright © 2018 Lugtu, Jihan Tyler. All rights reserved.
//

#include <stdio.h>
//State a Prototype
float num(float, float);
float num1(float);

int main()
{
    //User Input
    float Fahrenheit1, Faen2, Faen3, Faen4;
    float FtoFreeze1, Fto2, Fto3, Fto4;
    float CtoFreeze1, Cto2, Cto3, Cto4;
    float Celsius1, Cel2, Cel3, Cel4;
    
    //User input temp
    puts("Enter the Fahrenheit:");
    scanf("%f", &Fahrenheit1);
    puts("Enter the Fahrenheit:");
    scanf("%f", &Faen2);
    puts("Enter the Fahrenheit:");
    scanf("%f", &Faen3);
    puts("Enter the Fahrenhiet:");
    scanf("%f", &Faen4);
    
    //Calculations
    Celsius1 = (5.0/9) * (Fahrenheit1-32);
    Cel2 = (5.0/9) * (Faen2-32);
    Cel3 = (5.0/9) * (Faen3-32);
    Cel4 = (5.0/9) * (Faen4-32);
    CtoFreeze1 = Celsius1 - 0;
    Cto2 = Cel2 - 0;
    Cto3 = Cel3 - 0;
    Cto4 = Cel4 - 0;
    FtoFreeze1 = Fahrenheit1 - 32;
    Fto2 = Faen2 - 32;
    Fto3 = Faen3 - 32;
    Fto4 = Faen4 - 32;
    
    //Easy Read Table
    /*printf("Data:\n");
    printf("%15s %15s %15s %15s\n", "Fahrenheit", "Celcuis", "FtoFreeze", "CtoFreeze");
    printf("%15.2f %15.2f %15.2f %15.2f\n", Fahrenheit1, Celsius1, FtoFreeze1, CtoFreeze1 );
    printf("%15.2f %15.2f %15.2f %15.2f\n", Faen2, Cel2, Fto2, Cto2 );
    printf("%15.2f %15.2f %15.2f %15.2f\n", Faen3, Cel3, Fto3, Cto3);
    printf("%15.2f %15.2f %15.2f %15.2f\n", Faen4, Cel4, Fto4, Cto4 );
    return 0;*/
}

