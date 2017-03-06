#include <stdio.h>
#include <conio.h>
 
 int char_to_id (int c)
 {
     switch (c)
	 {
         case '0': return 0;
         case '1': return 1;
         case EOF: return 2;
         default: return 2;
     }
 }
 
 typedef struct table_item_s 
 {
     int state;
     int out_char; 
 
 } table_item_t;
 
 #define END_STATE 2
 table_item_t
 T[2][3] = 
 {
     { {1, '1'}, {0, '0'} , {END_STATE, '\n'}},
     { {1, '0'}, {1, '1'} , {END_STATE, '\n'}}
 };
 
 
  int main() 
  {
     int c, c_id;
     int state = 0;
     while(!feof(stdin)) 
	 {
         c = getchar();
         c_id  = char_to_id(c);
         putchar(T[state][c_id].out_char);
         state = T[state][c_id].state;
         if(state == END_STATE)
             return 0;
     }
 }