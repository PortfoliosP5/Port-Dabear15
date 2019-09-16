//
//  Temperature.c
//  realportfolio
//
//  Created by Sahai, Neil on 9/16/19.
//  Copyright © 2019 Sahai, Neil. All rights reserved.
//

#include "Temperature.h"
#include <stdio.h>
#include <math.h>

int Temperature(void){
    double temp1;
    double temp2;
    double temp3;
    double temp4;
    double temp5;
    double temp6;
    double temp7;
    double temp8;
    double temp9;
    double temp10;
    double temp11;
    double temp12;
    printf ("This the Temperature Lab\n");
    printf ("Please enter a value in Fahrenheit\n");
    scanf ("%lf", &temp1);
    printf ("Please enter a value in Fahrenheit\n");
    scanf ("%lf", &temp2);
    printf ("Please enter a value in Fahrenheit\n");
    scanf ("%lf", &temp3);
    printf ("Please enter a value in Fahrenheit\n");
    scanf ("%lf", &temp4);
    temp5=(temp1-32)*5/9;
    temp6=(temp2-32)*5/9;
    temp7=(temp3-32)*5/9;
    temp8=(temp4-32)*5/9;
    temp9=(temp5-0);
    temp10=(temp6-0);
    temp11=(temp7-0);
    temp12=(temp8-0);
    printf ("---TempInF---TempInC---CtoFreeze\n");
    printf ("%5lf%13lf%14lf\n", temp1,temp5,temp9);
    printf ("%5lf%13lf%14lf\n", temp2,temp6,temp10);
    printf ("%5lf%13lf%14lf\n", temp3,temp7,temp11);
    printf ("%5lf%13lf%14lf\n", temp4,temp8,temp12);
    return 0;
}

