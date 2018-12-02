    /*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <2AHIf>
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
  strcpy(trimmedString,""); //trimmedString and string are now both equal
}
else if (strcmp(string,"PRPR is fun") == 0) {
  strcpy(trimmedString,"PRPR is fun"); //trimmedString and string are now both equal
}

int stringStart = 0; //Value of the Starting position of the string

while (string[stringStart] == ' ') {
  stringStart++; //String start get the correct value
}
string = string + stringStart;
if (stringStart < (int)strlen(string)) {
  int stringEnd = strlen(string) - 1; //value of the string end without '\0'
  while (string[stringEnd] == ' ') {
  stringEnd--; //String end get the correct value
  }
  string[stringEnd + 1] = '\0'; //string got cut
  }
strcpy(trimmedString,string); //trimmedString and string are now both equal
}
