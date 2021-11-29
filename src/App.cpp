/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <math.h>

using namespace std;

// calculates the root that adds to -b
double getPlusRoot(int a, int b, int c){
    double res = 0;

    double root = pow(b, 2.0) - (4 * a * c);

    // if the result under the square root is negative, it produces an imaginary number
    if(root < 0){
        return INT64_MIN;
    }

    res = (-b + sqrt(pow(b, 2.0) - (4 * a * c))) / (2 * a);

    return res;
}

// calculates the root that subtracts from -b
double getMinusRoot(int a, int b, int c){
    double res = 0;

    double root = pow(b, 2.0) - (4 * a * c);

    if(root < 0){
        return INT64_MIN;
    }

    res = (-b - sqrt(pow(b, 2.0) - (4 * a * c))) / (2 * a);

    return res;
}

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    double plusRoot = getPlusRoot(a, b, c);
    double minusRoot = getMinusRoot(a, b, c);

    if(plusRoot == INT64_MIN || minusRoot == INT64_MIN){
        printf("Produces an imaginary number.");
        exit(-1);
    }

    printf("The roots are %lf and %lf", minusRoot, plusRoot);

    return 0;
}