# Registros

Este repositório contém um projeto desenvolvido em C que faz uso de struct, manipulação de arquivos binários e oferece diversas funcionalidades para gerenciamento de registros.

## Descrição do Projeto
O projeto é um sistema simples de registro que permite ao usuário realizar as seguintes operações:

- **Criar um arquivo:** Cria um arquivo binário para armazenar os registros.
- **Abrir o arquivo:** Exibe os registros armazenados.
- **Modificar um registro:** Permite editar informações de um registro específico.
- **Adicionar um registro:** Adiciona novos registros ao arquivo existente.
- **Deletar um registro:** Remove um registro específico do arquivo.
- **Procurar um registro:** Busca um registro pelo nome.

## Tecnologias Utilizadas
- Linguagem C
- Manipulação de arquivos binários
- Estruturas de Dados (Struct)

## Funcionalidades
1. **Criar um arquivo**
Permite criar um novo arquivo binário e cadastrar registros de calvície com nome, tipo e idade.

2. **Abrir o arquivo**
Exibe todos os registros presentes no arquivo binário.

3. **Adicionar um registro**
Adiciona novos registros ao arquivo binário, mantendo os existentes.

5. **Modificar um registro**
Modifica os dados de um registro existente com base na posição informada.

6. **Deletar um registro**
Remove um registro específico e reorganiza os dados restantes.

7. **Procurar um registro**
Busca um registro pelo nome e exibe suas informações.

## Pré-requisitos
Antes de executar o projeto, você precisará de:

Compilador C: Qualquer compilador C que permita compilar e executar programas em C. Algumas opções incluem CLion, Dev-C++, Visual Studio Code (com extensão C/C++) ou qualquer outro ambiente que suporte a linguagem C.
IDE ou Terminal: Para compilar e executar o código.

## Como executar o projeto
1. Clone o repositório:
```bash
git clone https://github.com/joaopedroffs/Registros.git
```
2. Navegue até a pasta do projeto:
```bash
cd Registros/Projeto\ em\ C
```
3. Compile o código em sua IDE ou Terminal
4. Execute o programa

## Exemplo de uso
Após executar o programa, você será apresentado a um menu com várias opções. Aqui está um exemplo de como utilizar cada uma delas:

Criar um arquivo:

Selecione a opção (1).
Informe quantos registros de calvos você deseja cadastrar.
Digite os nomes, tipos de calvície e idades dos calvos conforme solicitado.
Abrir o arquivo:

Selecione a opção (2).
O programa exibirá todos os registros que você cadastrou anteriormente.
Modificar um registro:

Selecione a opção (3).
O programa listará todos os registros. Escolha o número correspondente ao registro que deseja modificar e insira as novas informações.
Adicionar um registro:

Selecione a opção (4).
Insira o nome, tipo de calvície e idade do calvo que você deseja adicionar.
Deletar um registro:

Selecione a opção (5).
O programa listará todos os registros. Escolha o número correspondente ao registro que deseja deletar.
Procurar um registro:

Selecione a opção (6).
Digite o nome do calvo que deseja buscar. O programa exibirá as informações se encontrar o registro.

```bash
(1) --Criar um arquivo--
Quantos calvos você quer cadastrar?
3
Digite a entrada de 3 calvos:
Digite o nome do calvo 1:
João
Digite o tipo de calvície do paciente 1:
A
Digite a idade do paciente 1:
30
Digite o nome do calvo 2:
Pedro
Digite o tipo de calvície do paciente 2:
B
Digite a idade do paciente 2:
25
Digite o nome do calvo 3:
Carlos
Digite o tipo de calvície do paciente 3:
C
Digite a idade do paciente 3:
40

(2) --Abrir o arquivo--
0 -- Nome: João Tipo: A Idade: 30
1 -- Nome: Pedro Tipo: B Idade: 25
2 -- Nome: Carlos Tipo: C Idade: 40

(3) --Modificar o arquivo--
Digite o número do calvo que deseja modificar:
1
Digite o nome do calvo:
Pedro Silva
Digite o tipo de calvície do paciente:
A
Digite a idade do paciente:
26

(5) --Deletar um registro do arquivo--
Digite o número do calvo que deseja deletar:
0

(6) --Procurar um registro no arquivo--
Digite o nome do calvo que deseja buscar: 
Carlos
Calvo encontrado
Nome: Carlos
Tipo de calvície: C
Idade: 40
```

## Autor
Desenvolvido por João Pedro Ferreira França da Silva como parte de um projeto acadêmico.
