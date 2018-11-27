/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <stdio.h>
 #include <string.h>

 void trim(const char* source,  char* trimed_string ){
   char str[STRLEN];
   char trimmed[STRLEN];
   bool teststart;

   for (int i = (int)strlen(str) ; i = 0; i--) {
     if (str[i] == ' ') {
       teststart = true;
     }
     if (teststart == true) {
        trimmed[i] = str[i];
     }
     else{
       strcpy(trimmed,"");
     }
   }
}
