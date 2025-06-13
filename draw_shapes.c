#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//prints an arrow
void print_arrow(int leftCol, int head_size, int shaft_height){
  //triangle
  for(int row = 0; row <= head_size; row++){
    int minCol = leftCol + head_size - row;
    int maxCol = leftCol + head_size + row;
    int col;
    for(col = 0; col < minCol; col++) putchar(' ');
    for(       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }

  //rectabgle
  int shaft_width = head_size; //triangle base
  int shaft_leftCol = leftCol + head_size;
  /* int i, j;
  for(i = 0; i < shaft_height; i++){
    int col;
    for(col = 0; col < shaft_leftCol; col++) putchar(' ');
    for(j = 0; j < shaft_width; j++) putchar('*');
    putchar('\n');
    }*/
 
  for(int i = 0; i < shaft_height; i++){
    for(int j = 1; j < shaft_leftCol; j++) putchar(' ');
    for(int k = 0; k < shaft_width; k++) putchar('*');
   
    printf("*\n");
  }
}

    
