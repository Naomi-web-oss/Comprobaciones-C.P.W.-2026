//ACS_P1_Nomina.c - Una empresa de consultoría necesita calcular el salario neto de sus empleados.
#include <stdio.h>//Librería <stdio.h>.
#include <string.h>//Librería <string.h>.
int main(void){//Función principal - int main.
int nombre[20];
double salariobruto,salarioneto;
const double CAJA = 9.5;
const double IESS = 2.5;
const double IMPUESTO_SOBRE_RENTA = 10;

printf("=== Calculo de nomina ===\n");
printf("Nombre del empleado: ");
fgets(nombre, sizeof(nombre), stdin);


do 
{
if (salario_bruto > 0);{
    printf("Salario bruto: ");
    scanf(" %lf",&salario_bruto);

else {
    printf("Inválido ");
    printf("Salario bruto: ");
    scanf(" %lf", &salario_bruto);
}
}
} while (salario_bruto > 0);



 CAJA -= salario_bruto;
 IESS -= salario_bruto;


if (salario_bruto > 800)
{
   IMPUESTO_SOBRE_RENTA -= salario_bruto;

else{

}
}

salario_neto = salario_bruto - CAJA - IESS - IMPUESTO_SOBRE_RENTA;

printf(" ------- Comprobante de pago ------- \n");
printf("Empleado: %d\n", nombre);
printf("Salario bruto: %lf\n", salario_bruto);
printf("Descuento CAJA (9.5%%): %lf\n", CAJA);
printf("Descuento IESS (2.5%%): %lf\n", IESS);
printf("Impuesto renta (10%%): %lf\n",IMPUESTO_SOBRE_RENTA);
printf("Salario neto: %lf\n", salario_neto);

return 0;
}