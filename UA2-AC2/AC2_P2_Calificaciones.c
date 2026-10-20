 //AC2_P2_Calificaciones.c - Validación de calificaciones estudiantiles.
 //Un centro educativo necesita automatizar el cálculo de notas finales.
 // Biblioteca <stdio.h>.
 #define N 3 
 #include <stdio.h>
 int main(void){
//Definir variables como Entero.
  int nombre, i;//Nombre cuenta como cáracter o entero?
  double notas[3] = {75,82,68};
  double  suma = 0, mayor = notas[0],calificacion1, calificacion2, calificacion3,nota_mayor, promedio;

//Salidas y lecturas
  printf("=== Calificaciones del estudiante === \n");
  printf("Nombre del estudiante: \n");
  scanf(" %d", &nombre);

for (i = 0; i < 3; i++)
{
    if (calificacion1 >0 && calificacion1 <100)
    {
        printf("Calificacion 1 (0 a 100): \n");
        scanf(" %lf", &calificacion1);
    else {
          printf("Inválido");
    }
    }

     if (calificacion1 >0 && calificacion1 <100)
    {
        printf("Calificacion 1 (0 a 100): \n");
        scanf(" %lf", &calificacion2);
    else {
          printf("Inválido");
    }
    }

     if (calificacion1 >0 && calificacion1 <100)
    {
        printf("Calificacion 1 (0 a 100): \n");
        scanf(" %lf", &calificacion3);
    else {
          printf("Inválido");
    }
    }
    
}

promedio = calificacion1 + calificacion2 + calificacion3 / 3;

do 
{
    if (promedio >= 70)
    {
        printf("APROBADO");
     }
    else if (promedio >= 60){
        printf("EN RIESGO");
    }
    else {
        printf("NO APROBADO");
    }
     
} while (condition);


for (i = 0; i < N; i++)
{
   suma += notas[i];
   if (notas[i] > mayor)
   {
    mayor = notas[i];
    nota_mayor =i;
   }
   
}


printf("------- Resultado -------");
printf("Estudiante: %d\n", nombre);
printf("Calificacion 1:");
printf("Calificacion 2:");
printf("Calificacion 3:");
printf("Promedio:");
printf("Nota mas alta:");
printf("Condicion:");
 }