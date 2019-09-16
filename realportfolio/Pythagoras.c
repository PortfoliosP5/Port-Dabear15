//
//  Pythagoras.c
//  realportfolio
//
//  Created by Sahai, Neil on 9/13/19.
//  Copyright © 2019 Sahai, Neil. All rights reserved.
//

#include "Pythagoras.h"
#include <stdio.h>
#include <math.h>
int Pythagoras(void) {
    printf ("This is the Pythagoras Lab\n");
    printf ("Give a value for one of the side of the triangle\n");
    double sideOne;
    double sideTwo;
    scanf ("%lf", &sideOne);
    printf ("Give a value for the other side of the triangle\n");
    scanf ("%lf", &sideTwo);
    double Adjacent=sideOne;
    double Opposite=sideTwo;
    //Hypotenuse
    double Hypotenuse1 = (pow(Adjacent,2)) + (pow(Opposite,2));
    Hypotenuse1=sqrt(Hypotenuse1);
    printf("\nHypotenuse: %lf\n",Hypotenuse1);
    return 0;
}


