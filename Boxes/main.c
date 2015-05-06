//
//  main.c
//  Boxes
//
//  Created by Alain  on 2015-05-05.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>

typedef struct{
    float h;
    float l;
    float w;
} Box;

float calculateVolume(Box box){
    return box.h * box.l * box.w ;
}

Box makeBox(float height, float length, float width){
    
    Box b;
    b.h = height;
    b.l = length;
    b.w = width;
    
    return b;
}

float calculateTimesVolume(Box box1, Box box2){
    return (calculateVolume(box1)/calculateVolume(box2));
}

int main()
{

    Box b;
    b.h = 5;
    b.l = 5;
    b.w = 5;

    
    Box c = makeBox(10, 10, 10);
    
    float something = calculateVolume(b);
    printf("%f\n", something);
    
    float timesbigger = calculateTimesVolume(c, b);
    printf("%f\n", timesbigger);
   
    
}


