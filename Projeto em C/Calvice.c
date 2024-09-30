#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct calvice{
	int idade;
	char nome[20];
	char tipo[3];
}c;


int main(){
	
	int escolha;
	char continua;
	continua = 'S';
	
	while(continua == 'S'){
	
	printf("(1) --Criar um arquivo--\n");
	printf("(2) --Abrir o arquivo--\n");
	printf("(3) --Modificar o arquivo--\n");
	printf("(4) --Adicionar um registro no arquivo--\n");
	printf("(5) --Deletar um registro no arquivo--\n");
	printf("(6) --Procurar um registro no arquivo--\n\n");
	
	printf("Escolha o que voce deseja fazer: ");
	scanf("%d", &escolha);
	
	if(escolha == 1){
	//Criaar o arquivo
	FILE *arq;
	arq = fopen("arquivobinario.txt", "wb");
	
	printf("Quantos calvos voce quer cadastrar?\n");
	int t, i;
	scanf("%d", &t);
	while(getchar()!='\n');
	struct calvice vet[t];
	
	printf("Digite a entrada de %d calvos:\n", t);
	
	for(i = 0; i < t; i++){
		printf("Digite o nome do calvo %d: \n", i+1);
		fgets(vet[i].nome, 20, stdin);
		strtok(vet[i].nome, "\n");
		
		printf("Digite o tipo de calvice do paciente %d: \n", i+1);
		fgets(vet[i].tipo, 3, stdin);
		strtok(vet[i].tipo, "\n");
		
		printf("Digite a idade do paciente %d: \n", i+1);
		scanf("%d", &vet[i].idade);
		
		while(getchar()!='\n');
		
		fwrite(&vet[i], sizeof(vet[i]), 1, arq);
	}
	
	fclose(arq);
	
	printf("continuar mexendo com os arquivos(S/N): ");
	scanf("%s", &continua);
	
	if(continua == 'N'){
		printf("Obrigado, volte sempre! :)");
	}
}
	
	if(escolha == 2){
	//Leitura do arquivo
	FILE *arq;
	arq = fopen("arquivobinario.txt", "rb");
	
	int i = 0;
	
	while(fread(&c, sizeof(c), 1, arq)){
    	printf("%i -- Nome: %s Tipo: %s Idade: %d\n", i, c.nome, c.tipo, c.idade);
    	i++;
    }
    
	fclose(arq);
	
	printf("continuar mexendo com os arquivos(S/N): ");
	scanf("%s", &continua);
	
	if(continua == 'N'){
		printf("Obrigado, volte sempre! :)");
		break;
	}
	}
	
	if(escolha == 3){
	//Modificar o arquivo
	FILE *arq;
	arq = fopen("arquivobinario.txt", "rb+");
	
	int i = 0;
	
	while(fread(&c, sizeof(c), 1, arq)){
    printf("%i -- Nome: %s Tipo: %s Idade: %d\n", i, c.nome, c.tipo, c.idade);
    i++;
    }
    
    printf("Digite o numero do calvo que deseja modificar:\n");
    scanf("%d", &i);
    getchar();
    
	printf("Digite o nome do calvo:\n");
	scanf("%s", c.nome);
	
	printf("Digite o tipo de calvice do paciente:\n");
	scanf("%s", c.tipo);
	
	printf("Digite a idade do paciente:\n");
	scanf("%d", &c.idade);
	
	fseek(arq, i * sizeof(c), SEEK_SET);
    fwrite(&c, sizeof(c), 1, arq);


	fclose(arq);
	
	printf("continuar mexendo com os arquivos(S/N): ");
	scanf("%s", &continua);
	
	if(continua == 'N'){
		printf("Obrigado, volte sempre! :)");
	}
	}
	
	if(escolha == 4){
	//Adicionar registros no arquivo
	FILE *arq;
	arq = fopen("arquivobinario.txt", "ab+");
	
	int i, t, a;
	struct calvice vet[t];
	
	while(fread(&c, sizeof(c), 1, arq)){
    printf("%i -- Nome: %s Tipo: %s Idade: %d\n", i, c.nome, c.tipo, c.idade);
    i++;
    }
	
	printf("Digite o nome do calvo que deseja adicionar:\n");
	scanf("%s", c.nome);
	
	printf("Digite o tipo de calvice do paciente:\n");
	scanf("%s", c.tipo);
	
	printf("Digite a idade do paciente:\n");
	scanf("%d", &c.idade);
	
	fseek(arq, i * sizeof(c), SEEK_SET);
	fwrite(&c, sizeof(c), 1, arq);
    
    fclose(arq);
    
    printf("continuar mexendo com os arquivos(S/N): ");
	scanf("%s", &continua);
	
	if(continua == 'N'){
		printf("Obrigado, volte sempre :)");
	}
	
	}
	
	if(escolha == 5){
	//Deletar um registro do arquivo
	FILE *arq;
	FILE *temp;
	arq = fopen("arquivobinario.txt", "rb");
	temp = fopen("arquivodel.txt", "wb");
	
	int i = 0, t, n;
	
	while(fread(&c, sizeof(c), 1, arq)){
	printf("%i -- Nome: %s Tipo: %s Idade: %d\n",i, c.nome, c.tipo, c.idade);
	i++;
	}
	    
    printf("\nDigite o numero do calvo que deseja deletar:\n");
    scanf("%d", &n);
    getchar();
    fclose(arq);
    arq = fopen("arquivobinario.txt", "rb");
    i = 0;
    
   	while(fread(&c, sizeof(c), 1, arq)){
   	if(i!=n){
   		fwrite(&c, sizeof(c), 1, temp);
	   } 
	   i++;	
	}

	fclose(temp);
	fclose(arq);
    
    remove("arquivobinario.txt");
    rename("arquivodel.txt", "arquivobinario.txt");
    
    printf("Registro deletado! :)\n");
	
	fclose(arq);
	
	printf("continuar mexendo com os arquivos(S/N): ");
	scanf("%s", &continua);
	
	if(continua == 'N'){
		printf("Obrigado, volte sempre! :)");
		break;
	}
	}
 	if(escolha == 6){
    //Procurar um registro no arquivo
    FILE *arq;
    arq = fopen("arquivobinario.txt", "rb");
    
    printf("Digite o nome do calvo que deseja buscar: ");
    char nomeBusca[20];
    scanf("%s", nomeBusca);
    strtok(nomeBusca, "\n");
    
    int encontrado;
    while(fread(&c, sizeof(c), 1, arq)){
        if(strcmp(c.nome, nomeBusca) == 0){
            encontrado = 1;
            printf("Calvo encontrado\nNome: %s\nTipo de calvice: %s\nIdade: %d\n", c.nome, c.tipo, c.idade);
            break;
        }
    }
    
    fclose(arq);
    
    printf("\ncontinuar mexendo com os arquivos(S/N): ");
    scanf("%s", &continua);
    
    if(continua == 'N'){
        printf("Obrigado, volte sempre! :)");
    }
}
	}
	}