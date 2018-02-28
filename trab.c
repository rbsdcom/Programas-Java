	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include <locale.h>
	struct Cadastro
	{
	  char Nome[40];
	  char Endereco[40];
	  int  CPF[40];
	  int  DtNascimento[8];

	};
	
int a, b,c,d;
int al, bl,cl,dl;
int contador(){
	char letra;

		scanf("%s", &letra);
		 switch ( letra )
	  	  {
	     	 case 'a' :
			 	a++;
				 al++; 
	  		 break;
	 
			 case 'b' :
			    b++;
			    bl++;
			 break;
	 
		     case 'c' :
			    c++;
			    cl++;
		     break;
	 
	    	 case 'd' :
			    d++;
			    dl++;
		     break;
	  
	    	 default :
	         printf("\nAlternativa invalida!\n");
	         printf("Digite A B C ou D\n\n");
  	  	  	 return contador();;
	  	  }
	  	  

}
	
int	main ()
	{
   	 setlocale(LC_ALL, "Portuguese");		
	 struct Cadastro Cad[50];
	 int contador();
	 
	 char conta=0;
	 char profissao[10][30];
	 char grupo[10][30];
	 int Sair = 0;
	 int i = 0;
	 int soma=0;
	 int QtdTP=0;
	 int QtdRH=0;
	 int QtdCT=0;
	 int QtdOP=0,l,h=0;
	 int Opcao,VarRel;
	 int qtd_entrevistados=0;
	 int zeta;
	 int linguagem[10][30];
	 

	 
	 
	
	 do {  
	 printf ("Escolha uma opcao abaixo: \n");
	 printf ("1. Cadastrar novo entrevistado\n");
	 printf ("2. Lista repostas todos entrevistados\n");
	 printf ("3. Lista relatório de entrevistados\n");
	 printf ("4. sair\n");
	 scanf ("%d", &Opcao);
	 system ("cls");
	 
	 if (Opcao==1)
	 {
	              i=i+1;
      			  qtd_entrevistados = qtd_entrevistados + 1;
      			  
	              printf ("Informe nome da pessoa: ");
	              fflush (stdin);fgets (Cad[i].Nome,40,stdin);
	              printf ("Informe o seu endereco: ");
	              fflush (stdin);fgets (Cad[i].Endereco,40,stdin);
  	              printf ("Informe Dta Nascimento: ");
	              fflush (stdin);fgets (Cad[i].DtNascimento,40,stdin);
	              printf ("Informe o seu CPF     : ");
	              fflush (stdin);fgets (Cad[i].CPF,40,stdin);	              
	              system ("cls");
	              conta++;
	              

			printf ("\nNa escola, voce prefere assuntos ligados à: \n");
			printf ("a) Arte, esportes e atividades extracurriculares \n");
			printf ("b) Biologia e genetica \n");
			printf ("c) Ciencias humanas, idiomas \n");
			printf ("d) Ciencias exatas \n\n");
			contador();
			
			printf ("\nVocê prefere levar sua vida: \n");
			printf ("a) Com pouca rotina e poucas regras \n");
			printf ("b) Com regras definidas e disciplina \n");
			printf ("c) Interagindo com todo tipo de pessoa \n");
			printf ("d) Com muita autonomia: “na sua”\n\n");
			contador();
			
			printf ("\nVocê prefere levar sua vida: \n");
			printf ("a) Com pouca rotina e poucas regras \n");
			printf ("b) Com regras definidas e disciplina \n");
			printf ("c) Interagindo com todo tipo de pessoa \n");
			printf ("d) Com muita autonomia: “na sua”\n\n");
			contador();
			
			printf ("\nVocê prefere levar sua vida: \n");
			printf ("a) Com pouca rotina e poucas regras \n");
			printf ("b) Com regras definidas e disciplina \n");
			printf ("c) Interagindo com todo tipo de pessoa \n");
			printf ("d) Com muita autonomia: “na sua”\n\n");
			contador();
			
	              
	       if(a > b && a > c && a > d)
			{
		    	printf("*******************************************************************************");
				printf("\n*					   			              *");				 	
			    printf("\n* 		 Escolha e escreva uma das opçõoes abaixo:                    *\n");
   				printf("*					      				      *\n");
				printf("*					      				      *\n");
 			    printf("*******************************************************************************\n");
 				printf("*					                                      *\n");
  	   	   		printf("1 Inst. cirurgico\t"   "2 Anestesista \t"   "3 Artista plástico\t"  "4 Ator        *\n");
				printf("5 Dermatologista\t"    "6 Estilista\t"      "7 Fotografo\t\t"       "8 Guia turismo*\n");
				printf("9 Personal trainer\t"  "10 Personal \t"     "11 Relac. publicas\t"  "12 Piloto     *\n");
				printf("13 Cineasta\t\t"	   "14 Cirurgiao\t"     "15 Coreógrafo\t\t"	    "16 Dançarino  *\n");
				printf("17 Jornalista\t\t" 	   "18 Paisagista\t"    "19 Publicitário\t\t"   "20 roteirista *\n");
				printf("21 Inst. de voo\t\t"   "22 Esportista\t"    "23 Médico clínico\t"   "24 Ator       *\n");
				printf("25 Personal stylist\t" "26 Músico\t"        "27 Chef de Cozinha                    *\n");			
 				printf("*					                                      *\n");				
 			    printf("*******************************************************************************\n\n");

	 	 	    scanf("%s", &profissao[conta]);
				QtdTP++;
      	        printf("\n");
				strcpy( grupo[conta], "Grupo Trato com Pessoal");
				
			}


			if(b > a && b > c && b > d)
			{

 			    printf("****************************************************");
				printf("\n*					     	   *");				 	
			    printf("\n*  Escolha e escreva uma das opçõoes abaixo:  	   *\n");
   				printf("*					      	   *\n");
				printf("*					      	   *\n");
 			    printf("****************************************************\n");
 				printf("*					      	   *\n");
			 	printf("* 1 Administrador de empresas\t"   "2  Advogado 	   *\n");
			 	printf("* 3 Engenheiro mecânico/químico\t" "4  Juiz de direito *\n");
				printf("* 5 Pator/padre/rabino\t\t"  	   "6  Delegado        *\n");
			 	printf("* 7 Assistente social\t\t"     	   "8  Bibliotecário   *\n");
				printf("* 9 Promotor público\t\t"		   "10 Policial 	   *");
				printf("\n*					     	   *");					
 			    printf("\n****************************************************\n\n");						
	 	 	    scanf("%s", &profissao[conta]);
				QtdRH++;
      	        printf("\n");				
				strcpy( grupo[conta], "Grupo Rrelações Humanas");
   	   	   	   				
			}


			if(c > b && c > a && c > d)
			{
			    printf("***********************************************");
				printf("\n*					      *");				 	
			    printf("\n*  Escolha e escreva uma das opçõoes abaixo:  *\n");
   				printf("*					      *\n");
				printf("*					      *\n");
 			    printf("***********************************************\n");
 				printf("*					      *\n");				 			    
				printf("* 1  Artista plástico\t\t"    "2  Educador   *\n");
				printf("* 3  Terapeuta ocupacional\t" "4  Escritor   *\n");
				printf("* 5  Jornalista\t\t\t"   	  "6  Dramaturgo *\n");
				printf("* 7  Filósofo\t\t\t"      	  "8  Tradutor   *\n");
				printf("* 9  Pedagogo\t\t\t" 		  "10 Sociólogo  *\n");
				printf("* 11 Professor\t\t\t"  		  "12 Psiquiatra *\n");
				printf("* 13 Psicólogo				      *");
				printf("\n*					      *");
 			    printf("\n***********************************************\n\n");

	 	 	    scanf("%s", &profissao[conta]);
       	        printf("\n");
				QtdOP++;
				strcpy( grupo[conta], "Grupo Organização e Planejament");
			}


			if(d > b && d > c && d > a)
			{
			   	printf("*****************************************************************");
				printf("\n*					     			*");				 	
			    printf("\n*  Escolha e escreva uma das opçõoes abaixo:  			*\n");
   				printf("*					    			*\n");
				printf("*					      			*\n");
				printf("*****************************************************************");
				printf("\n*					     			*\n");				 	
				printf("*1  Analista de sistemas\t"      "2  Militar \t"    "3  Oceanógrafo  *\n"); 
				printf("*4  Criador de software\t\t"	 "5  Pesquisador\t" "6  Químico	*\n");
				printf("*7  Designer industrial\t\t"     "8  Matemático\t"  "9  Físico	*\n");
				printf("*10 Músico (regente)\t\t"        "11 Engenheiro\t"  "12 Economista   *\n");
				printf("*13 Líder de uma corporação\t"   "14 Urbanista \t"  "15 Zoólogo	*\n" );
				printf("*16 Antropólogo\t\t\t"  		 "17 Astrônomo\t"   "18 Arquiteto    *\n");
				printf("*					      			*\n");
				printf("*****************************************************************\n\n");
	 	 	    scanf("%s", &profissao[conta]);
      	        printf("\n");
				QtdCT++;
				strcpy( grupo[conta], "Grupo Ciência e Tecnologia ");				
			} 		

	 }

	 int var;
	if(Opcao==2){
 	printf("*********************************");	
	printf("\n*  Somatório qtde alternativas\t*\n");
	printf("*			 	*");
	printf("\n*\tLetra: A | B | C | D\t*");
	printf("\n*\tQtde:  %d | %d | %d | %d\t*\n", al,bl,cl,dl);
	printf("*			 	*\n");
	printf("*********************************\n\n");
	
		

	 }
	 

	
	a=NULL;
    b=NULL;
    c=NULL;
    d=NULL;
 
	

		if (Opcao == 3)
		{						
			printf ("\nQuantidade total de intrevistados: %d\n\n", qtd_entrevistados);
			printf ("Grupo trato com pessoal          : %d\n", QtdTP);
			printf ("Grupo relações humanas           : %d\n", QtdRH);
			printf ("Grupo ciência e tecnologia       : %d\n", QtdCT);
			printf ("Grupo organização e planejamento : %d\n", QtdOP);
	        printf("\n");
  	        printf("\n");

			   
      	  for (VarRel=1	;VarRel<=conta;VarRel++)
		    {
		    	printf("******************************\n*");
				printf ("* Nome     : %s*",  &Cad[VarRel].Nome);
				printf ("* Endereco : %s*",  &Cad[VarRel].Endereco);
				printf ("* CPF      : %s*",  &Cad[VarRel].CPF);
				printf ("* Data de Nascimento   : %s*",   Cad[VarRel].DtNascimento);
		   	   	printf ("* Area de conhecimento : %s\n*", grupo[VarRel] );
				printf ("* Profissao escolhida  : %s\n*", &profissao[VarRel] );
				printf ("* Media do questionario: ?\n");
				printf ("\n\n");
 	  	   			   
		    }	
    	     	   
    	   
 	    }

	 
	 if (Opcao==4)
	 {
	    Sair = 1;
	 }
	 
// 	 for(var=1;var<i;var++ )	
// 	   	printf ("* Area de conhecimento %d: %s \n",i, grupo[var] );
	 } while (Sair == 0);
	 
	}         