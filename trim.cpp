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
#include <string.h>
#include <stdio.h>

void trim(char* string, char* trimmedString){

 if (strcmp(string,"") == 0) {
   strcpy(trimmedString,"");
 }
}
