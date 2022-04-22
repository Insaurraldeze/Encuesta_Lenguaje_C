/*se desea volcar en un listado los resultados de una encuesta realizada a 300 personas
se pregunto su edad, estatura y color preferido, ingresarlos en un registro, luego pasar
los datos a un vector de registros, luego mostrar el listado completo, por ultimo mostrar
cuantas personas tienen 18 años o mas, el promedio de todas las estaturas y cuantas de las 
superan el promedio eligieron el color blanco.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	const int n=100;
	struct encuesta
	{
		int edad;
		float estatura;
		char color[20];
	};
	struct encuesta persona;
	struct encuesta v[n];
	int i;
	char nombre[20];
	float medida;
	int anios;
	int cont=0;
	float prom;
	float acum=0;
	int mayor=0;
	int b;
	
	
	for(i=0;i<n;i++)
	{
		printf("INGRESE LOS DATOS DE LOS %d ENCUESTADOS: ",n);
		do
		{
			printf("INGRESE LOS AÑOS DE LA PERSONA %d :",i+1);
			scanf("%d",&persona.edad);
			fflush(stdin);
			if(persona.edad<0)
			printf("VALOR INCORRECTO");
		}
		while(persona.edad<0);
		
		do
		{
			printf("INGRESE LA ESTUTURA DE LA PERSONA %d:",i+1);
			scanf("%f",&persona.estatura);
			fflush(stdin);
			if(persona.estatura<=0)
			printf("VALOR INCORRECTO");
		}
		while(persona.estatura<=0);
		
		printf("INGRESE EL COLOR ELEGIDO POR LA PERSONA %d:",i+1);
		gets(persona.color);
		fflush(stdin);
		
		v[i].edad=persona.edad;
		v[i].estatura=persona.estatura;
		strcpy(v[i].color,persona.color);
	}
	printf("\n\n***************************************************************\n");
	printf("\t   ENCUESTADOS  \n");
	for(i=0;i<n;i++)
	{
		persona.edad=v[i].edad;
		persona.estatura=v[i].estatura;
		strcpy(persona.color,v[i].color);
		
		printf(" %3d  %.2f   %10s\n",persona.edad,persona.estatura,persona.color);
		
	
	}
	
cont=0;
	for(i=0;i<n;i++)
	{
	  persona.edad=v[i].edad;
		if(persona.edad>=18)
		cont++;
		
	}
	printf("LAS PERSONAS QUE TIENE 18 AÑOS O MAS SON %d\n",cont);
	prom=0;
	for(i=0;i<n;i++)
	{
		persona.estatura=v[i].estatura;
		prom=prom+persona.estatura;
		
	}
	prom=prom/n;
	printf("EL PROMEDIO DE ESTATURA ES %.2f\n",prom);
	
	
	for(i=0;i<n;i++)
	{
		persona.estatura=v[i].estatura;
		strcpy(persona.color,v[i].color);
		b=strcmp(persona.color,"BLANCO");
		
		if((prom<persona.estatura)&&(b==0));
		     mayor++;   
	    	
	}
	
	printf("LAS PERSONAS QUE SUPERAN EL PROMEDIO Y ELIGIERON EL COLOR BLANCO  %d\n",mayor);
	
	
	
	
	
	
	
}
