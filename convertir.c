#include <stdio.h>

int main(){

float km,millas,yardas,pies;
printf("Introduce una longitud en km\n");
scanf("%f",&km);

millas=km/1.60;
yardas=km*(100000/91.44);
pies=km*(100000/30.48);

printf("El valor en millas es " "%.3f" " en yardas es, " "%.3f" " y pies es " "%.3f\n" , millas, yardas, pies);


return 0;
}

