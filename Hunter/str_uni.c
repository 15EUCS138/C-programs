#include <stdio.h>
#include <string.h>
struct car{
char name[50];
char  colour[50];
char  rented_or_not[50];
int model[100];
int dis_travel;
union Data{  
  char  name;
  char add;
  int date;
};
};
union data c1; 
union data c2;
union data c3;
strcpy( c1.name, "Arun");
strcpy( c1.address, "Metukuppam");
strcpy( c1.date,"01/07/2015");
strcpy( c2.name, "oilleak");
strcpy( c2.address, "oilleak");
strcpy( c2.date," 02/07/2015");
strcpy( c3.name, "Senthil");
strcpy( c3.address, "oilleak");
strcpy( c3.date,"04/07/2015");
int main()
{
printf( "c1 name: %s\n", c1.name);
printf( "c1.address : %s\n", c1.address);printf( "c1.date : %d\n",c1.date);
printf( "c3 name : %s\n", c3.name);
printf( "c3 address : %s\n", c3.address);
printf( "c3.date : %d\n",c3.date);
}
