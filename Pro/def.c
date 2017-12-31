#include <stdio.h>
#if !defined (MESSAGE)  
 #define MESSAGE "You wish!"
#endifint main(void){   
printf("Here is the message: %s", MESSAGE);   
  return 0;
}
