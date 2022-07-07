#include <stdio.h>
#include <stdlib.h>



/*
7. Considerando a estrutura:
struct Ponto{
int x;int y;
};
para representar um ponto em uma grade 2D, implemente uma função que indique se um
ponto p está localizado dentro ou fora de um retângulo. O retângulo é definido por seus
vértices inferior esquerdo v1 e superior direito v2. A função deve retornar 1 caso o ponto
esteja localizado dentro do retângulo e 0 caso contrário. Essa função deve obedecer ao
protótipo:
int dentroRet (struct Ponto v1, struct Ponto v2, struct Ponto p);
*/
/*
struct Ponto
	{
	int x;int y;
	};
	
int dentroRet (struct Ponto v1, struct Ponto v2, struct Ponto p);

int main()
{
	struct Ponto x0;
	struct Ponto x1;
	struct Ponto pt;
	
	printf("Digite a o ponto x do vertice X0: ");
	scanf("%d", &x0.x);
	printf("Digite o ponto y do vertice X0: ");
	scanf("%d", &x0.y);
	printf("Digite a o ponto x do vertice X1: ");
	scanf("%d", &x1.x);
	printf("Digite o ponto y do vertice X1: ");
	scanf("%d", &x1.y);
	printf("Digite a o ponto x do vertice pt: ");
	scanf("%d", &pt.x);
	printf("Digite o ponto y do vertice pt: ");
	scanf("%d", &pt.y);
	
	
	printf("\nOs vertices digitados foram: \n");
	printf("Inferior esquerdo v1=(%d, %d)\nSuperior direito v2=(%d, %d)\nPonto p=(%d, %d)\n",x0.x, x0.y, x1.x, x1.y, pt.x, pt.y);
	
	return dentroRet(x0, x1, pt);
	
	
}


int dentroRet (struct Ponto v1, struct Ponto v2, struct Ponto p)
{
	int r;
	
	if ((v1.x <= p.x) && (v2.x >= p.x) && (v1.y <= p.y) && (v2.y >= p.y))
	{
		r = 1;
		printf("\n%d - O ponto esta dentro do retangulo\n\n", r);
	}else
	{
		r = 0;
		printf("\n%d - O ponto esta fora do retangulo\n\n", r);
	}
	return r;
}
*/

/*
6. Faça uma função que receba como parâmetro um vetor X de 30 elementos inteiros e
retorne, também por parâmetro, dois vetores A e B. O vetor A deve conter os elementos
pares de X e o vetor B, os elementos ímpares.
*/

void parimpar(int vet[])
{
	int nvet = 4;
	int par[nvet];
	int impar[nvet];
	int count1=0;
	int count2=0;
	int i=0;
	
	for(i=0; i<nvet; i++)
	{
		if(vet[i]%2==0)
	 		{
	 			//vetor par
	 			par[count1]=vet[i];

	 			count1++;
	 		}
	 		else
	 		{	
	 			//vetor impar
	 			impar[count2]=vet[i];
	 			count2++;
	 		}		
	 	
	 }
	 
	 printf("\nOs vetores gerados foram: \n");
	 
	 printf("Vetor X[%d] = {", nvet);
	 for(i=0; i<nvet; i++)
	 {
	 	printf(" %d ", vet[i]);
	 }
	 printf("} - Todos os numeros digitados\n");

	 printf("Vetor A[%d] = {", count1);
	 for(i=0; i<count1; i++)
	 {
	 	printf(" %d ", par[i]);
	 }
	 printf("} - Elementos digitados que sao par\n");


	 printf("Vetor B[%d] = {", count2);
	 for(i=0; i<count2; i++)
	 {

	 	printf(" %d ", impar[i]);
	 }
	 printf("} - Elementos digitados que sao impar\n\n");




}




void main()
{
	int tam=4; //variavel tamanho vetor
	int X[tam];
	int i=0;	
	
	for(i=0; i<tam; i++)
	{
		printf("Digite um valor para a posicao %d: ", i);
		scanf("%d", &X[i]);
	}
	
	
	return parimpar(X);

}




/*
5. Faça uma função chamada ‘simplifica’ que recebe como parâmetro o numerador e o
denominador de uma fração. Esta função deve simplificar a fração recebida dividindo o
numerador e o denominador pelo maior fator possível. Por exemplo, a fração 36/60
simplifica para 3/5 dividindo o numerador e o denominador por 12. A função deve modificar
as variáveis passadas como parâmetro.
*/

/*
void simplifica(int nume, int deno)
{
	int i, div;
	
	if(nume<deno)
	{
		for(i=1; i<=nume; i++)
		{
			if((nume%i==0) && (deno%i==0))
			{
				div=i;
			}
		}
	}
	else
	{
		for(i=1; i<=deno; i++)
		{
			if((deno%i==0) && (nume%i==0)) 
			{
				div=i;
			}
		}
	}
	printf("\nO maior numero que simplifica a expressao eh: %d\n", div);
	printf("A expressao simplificada eh: %d/%d\n\n", nume/div, deno/div);
}


void main()
{
	int n1, n2;
	
	printf("\n----Simplicica divisao----\n\n");
	printf("Digite um valor para o numerador: ");
	scanf("%d", &n1);
	printf("Digite um valor para o denominador: ");
	scanf("%d", &n2);
	
	simplifica(n1, n2);	
}

*/

/*
4. Crie um programa que receba três valores (obrigatoriamente maiores que zero),
representando as medidas dos três lados de um triângulo. Elabore funções para:

(a) Determinar se eles lados formam um triangulo, sabendo que:
• O comprimento de cada lado de um triangulo é menor do que a soma dos outros dois lados.

(b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo que:
• Chama-se equilátero o triângulo que tem três lados iguais.
• Denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais.
• Recebe o nome de escaleno o triangulo que tem os três lados diferentes.
*/


/*
				//verificar se forma triangulo e classifica
void formatriang(float ld1, float ld2, float ld3)

				 //verifica lados
{
	if((ld1 > ld2 + ld3) || (ld2 > ld1 + ld3) || (ld3 > ld1 + ld2)||ld1==0||ld2==0||ld3==0)   
	{
		printf("\nEsses valores não formam triangulo!\n\n");
	}
				//classifica
	else
	{
		if(ld1==ld2&&ld2==ld3)
		{
			printf("\nOs lados digitados forma um triangulo Equilatero\n\n");
		}else
		{
			if(ld1==ld2||ld1==ld2||ld2==ld3)
			{
				printf("\nOs lados digitados forma um triangulo Isosceles\n\n");
			}else
			{
				printf("\nOs lados digitados forma um triangulo Escaleno\n\n");
			}
		}
	}	
}

void main()
{
	float l1, l2, l3;
	
	
	printf("Digite um valor para o lado 1: ");
	scanf("%f", &l1);
	printf("Digite um valor para o lado 2: ");
	scanf("%f", &l2);
	printf("Digite um valor para o lado 3: ");
	scanf("%f", &l3);
	
	formatriang(l1, l2, l3);

}
*/

/*
3. Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. Se a
letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P, deverá
calcular a média ponderada, com pesos 5, 3 e 2.
*/
/*

//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

void media(float n1, float n2, float n3, char med)
{

    printf("\n");
    printf("Digite uma opcao para calculo: ");
    
    printf("Digite (A) para media aritimetica ou (P) para media ponderada: ");
    
    scanf("%c", &med);
    flush_in();

    if(med=='A'||med=='a')
    {
    	printf("\n");
        printf("A media aritmetica das notas %.2f, %.2f e %.2f e igual a: %.2f", n1, n2, n3, ((n1+n2+n3)/3));
        printf("\n\n");
    }
    if(med=='P'||med=='p')
    {
        printf("\n");
        printf("A media ponderada das notas %.2f, %.2f e %.2f e igual a: %.2f", n1, n2, n3, ((n1*5)+(n2*3)+(n3*2))/(5+3+2));
    	printf("\n\n");
    }

}


void main()
{
    float n1, n2, n3;
    char med;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    flush_in();
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    flush_in();
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    flush_in();
    media(n1, n2, n3, med);


}
*/


/*
2. Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos.
*/
/*
void converte(int hora, int minuto, int segundos)
{

    printf("Os dados digitados de %dh:%dm:%ds equivalem a %d segundos", hora, minuto, segundos, (segundos+(minuto*60)+(hora*3600)));

}

void main()
{
    int hora, minuto, segundos;
    printf("Digite a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minuto);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    converte(hora, minuto, segundos);
}
*/

/*
1. Faça uma função que receba a data atual (dia, mês s e ano em inteiro) e exiba-a na tela no
formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de 2000.
*/
/*
void imprime()
{
    int dia, mes, ano;


    printf("\n");

    printf("Digite o dia atual com dois digitos(01): ");
    scanf("%d", &dia);
    printf("Digite o mês atual(01): ");
    scanf("%d", &mes);
    printf("Digite o ando atual com 4 digitos(1111): ");
    scanf("%d", &ano);

    printf("\n");
    printf("A data atual e, %d de ", dia);

    switch(mes){
    case 01:
        printf("janeiro"); break;
    case 02:
        printf("fevereiro"); break;
    case 03:
        printf("marco"); break;
    case 04:
        printf("abril"); break;
    case 05:
        printf("maio");break;
    case 06:
        printf("junho");break;
    case 07:
        printf("julho");break;
    case 8:
        printf("agosto"); break;
    case 9:
        printf("setembro"); break;
    case 10:
        printf("outubro");break;
    case 11:
        printf("novembro");break;
    case 12:
        printf("dezembro");break;
    }


    printf(" %d", ano);
    printf("\n");

}

void main(){

imprime();
}
*/
