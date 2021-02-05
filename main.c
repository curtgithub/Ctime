/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: owner
 *
 * Created on January 4, 2020, 11:39 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
   clock_t start_t, end_t, total_t;
   int i;

   start_t = clock();
   printf("Starting of the program, start_t = %lu\n", start_t);

   int n, d;
   double x;
   printf("Going to run a big loop\n");
   for (i = 0; i < 1000000000; i++) {
      n = rand();
      d = rand();
      x = n / d;
   }
   printf("End loop, x = %f\n", x);
   end_t = clock();
   printf("End loop, end_t = %lu\n", end_t);

   total_t = end_t - start_t;
   printf("Total time taken by CPU: %lu\n", total_t);
   printf("Exiting of the program...\n");

   return (EXIT_SUCCESS);
}

