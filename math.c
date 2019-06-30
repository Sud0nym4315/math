#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//intellectual property of sud0nym. all rights reserved
int main() {
     
     int a1; //choice between Algebra and geometry
     int b1; //choice between algebra formulas
     int c1, c2; //choice between geometry formulas
     
     //variables for rotating points in Geometry
     int rw; //degrees
     int rx, ry; //starting coordinates
     int rx1, ry1; //ending coordinates
     
     //variables for translation of points in Geometry
     int tx, ty; //original (x, y) coord
     char axis; //axis
     int distance; //distance across axis
     int tx1, ty1; //new (x, y) coords
     
     //variables for pythagorean theorem
     int pa, pb, pc, pa1, pb1;
     float pc1; 

/************************************************************/

     system("clear");
     printf("\n\n");
     printf("  1) Algebra            2) Geometry");
     printf("\n\n");
     
     printf("enter number: ");
     scanf("%d", &a1);
     
     switch(a1) {
          case 1:
               system("clear");
               printf("This branch of mathematics is not programmed yet. please wait until the next update.\n\n\n\n");
               system("sleep 2s"); system("clear");
               exit(0);
          case 2:
               system("clear");
               printf(" Geometry\n");
               printf("  1) rotate points         2) translate points\n");
               printf("  3) Pythagorean theorem   4) [not programmed yet]\n\n");
               
               printf("enter number: ");
               scanf("%d", &b1);
               
               switch(b1) {
                    case 1:
                    //NOTE: clockwise is negative. counterclockwise is potitive
                         system("clear");
                          
                         printf(" Rotate Points\n");
                         printf("rotate point 'a' how many degrees?: ");
                         scanf("%d", &rw);
                         printf("\n\n");
                         
                         switch(rw)
                         {
                              case 90: //if w == 90 then...
                                   printf("what is x: ");
                                   scanf("%d", &rx);
                                   
                                   printf("\n");
                                   
                                   printf("what is y: ");
                                   scanf("%d", &ry);
                                   
                                   rx1 = -ry;
                                   ry1 = rx;
                                   
                                   printf("\n");
                                   
                                   printf("rotated 90 degrees about the origin, point 'a' is: (%d, %d)", rx1, ry1);
                                   
                                   printf("\n\n");
                                   
                                   break;
                              
                              case 180: //if w == 180....
                                   printf("what is x: ");
                                   scanf("%d", &rx);
                                   
                                   printf("\n");
                                   
                                   printf("what is y: ");
                                   scanf("%d", &ry);
                                   
                                   printf("\n");
                                   
                                   rx1 = -rx;
                                   ry1 = -ry;
                                   
                                   printf("\n");
                                   
                                   printf("rotated 180 degrees about the origin, point 'a' is: (%d, %d)", rx1, ry1);
                                   printf("\n\n");
                                   break;
                              
                              case 270: //if w == 270...
                                   printf("what is x: ");
                                   scanf("%d", &rx);
                                   
                                   printf("\n");
                                   
                                   printf("what is y: ");
                                   scanf("%d", &ry);
                                   
                                   printf("\n");
                                   
                                   rx1 = ry;
                                   ry1 = -rx;
                                   
                                   printf("rotated 270 degrees about the origin, point 'a' is: (%d, %d)", rx1, ry1); //fixed
                                   printf("\n\n");
                                   
                                   break;
                              
                              case -270:
                                   printf("what is x: ");
                                   scanf("%d", &rx);
                                   
                                   printf("\n");
                                   
                                   printf("what is y: ");
                                   scanf("%d", &ry);
                                   
                                   printf("\n");
                                   
                                   rx1 = -ry;
                                   ry1 = rx;
                                   
                                   printf("rotated 270 degrees about the origin, point 'a' is: (%d, %d)", rx1, ry1); //fixed
                                   printf("\n\n");
                                   
                                   break;
                              //create more cases
                              
                              default:
                                   printf("degree of rotation not programmed.");
                                   printf("\n\n");
                                   break;
                         }
                         break;
                         
                    case 2:
                         system("clear");
                         
                         printf(" Translate Points\n");
                              
                         //user input variables
                         printf("what is x: ");
                         scanf("%d", &tx);
                         printf("\n");
                              
                         printf("what is y: ");
                         scanf("%d", &ty);
                         printf("\n");
                              
                         printf("translate along what axis:");
                         scanf(" %c", &axis);
                         printf("\n");
                              
                         //computation...
                         switch(axis) {
                              case 'x':
                                   printf("translation distance: ");
                                   scanf("%d", &distance);
                                   printf("\n");
                                        
                                   tx1 = tx + distance;
                                   ty1 = ty;
                                        
                                   printf("new position is: (%d, %d)", tx1, ty1);
                                   break;
                                        
                              case 'y':
                                   printf("translation distance: ");
                                   scanf("%d", &distance);
                                   printf("\n");
                                        
                                   tx1 = tx;
                                   ty1 = ty + distance;
                                        
                                   printf("new position is: (%d, %d)", tx1, ty1);
                                   break;
                                   
                              default:
                                   printf("invalid geometric axis. exiting...");
                                   printf("\n\n");
                                   break;
                         }
                         break;         
                    }
                    break;
                    
                    case 3:
                         system("clear");
                         printf(" Pythagorean Theorem");
                         printf("\n\n");
                         printf(" 1) find hypotenuse        2) find side");
                         printf("\n");
                         
                         printf("enter number: ");
                         scanf("%d", &c2);
                         printf("\n\n");
                         
                         switch(c2) {
                              case 1:
                                   
                                   //ask for variable inputs
                                   printf("value for a: ");
                                   scanf("%d", &pa);
                                   
                                   printf("\n");  //output formatting
                                   
                                   printf("value for b: ");
                                   scanf("%d", &pb);
                                   
                                   //compute inputs via "pythagorean hypotenuse algorithm"
                                   pa1 = pa * pa;
                                   pb1 = pb * pb;
                                   
                                   pc = pa1 + pb1;
                                   
                                   pc1 = sqrt(pc);
                                   
                                   printf("\n");
                                   
                                   //print result
                                   printf("a^2 + b^2 = %2.3f", &pc1);
                                   printf("\n\n");
                                   break;
                                   
                              case 2:
                                   printf("path not programmed yet. please wait until next update.\n\n");
                                   break;
                              }
                    case 4:
                    printf("this formula is not programmed yet. please wait until next update.");
                         break;
                         
                    default:
                         printf("invalid number choice. exiting.");
                         break;
               }
     system("sleep 2s");
     printf("this program has ended. Goodbye!");
     system("sleep 4s");
     printf("\n\n");
     system("clear");
     return 0;
} 