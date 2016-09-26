//
//  main.c
//  fizzbuzzRecursion
//
//  Created by amir sankar on 3/14/16.
//  Copyright © 2016 amir sankar. All rights reserved.
//

#include <stdio.h>

void fizzbuzz(int i);

int max = 100;
int i = 1;

int main(int argc, const char * argv[]) {
    fizzbuzz(i);
    return 0;
}


void fizzbuzz(int i){
    if (i%3 == 0 && i%5 == 0){
        printf("%d Fizzbuzz\n", i);}
    else if((i%3)==0){
        printf("%d Fizz\n", i);}
    else{
        printf("%d Buzz\n", i);}
    if(i <= max){
        i++;
        fizzbuzz(i);
    }
        
}