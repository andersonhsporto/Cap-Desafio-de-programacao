# Desafio de programação (ACADEMIA CAPGEMINI)

# Questão 01

Escreva um algoritmo que mostre na tela uma escada de tamanho n utilizando
 o caractere * e espaços. A base e altura da escada devem ser iguais ao
  valor de n.
A última linha não deve conter nenhum espaço.

## Exemplo:

#### Entrada
```C
n = 6
```

#### Saída
```C
     *
    **
   ***
  ****
 *****
******
```

Para mudar o tamanho da escada, altere a função main do arquivo `q1.c` como
 no exemplo abaixo:
<img src="https://github.com/andersonhsporto/Cap-Desafio-de-programacao/blob/main/images/main1.png" width="400" height=auto/>


<hr>

# Questão 02

Débora se inscreveu em uma rede social para se manter em contato com seus amigos
. A página de cadastro exigia o preenchimento dos campos de nome e senha, porém
 a senha precisa ser forte. O site considera uma senha forte quando ela satisfaz
  os seguintes critérios:
```bash
• Possui no mínimo 6 caracteres.
• Contém no mínimo 1 digito.
• Contém no mínimo 1 letra em minúsculo.
• Contém no mínimo 1 letra em maiúsculo.
• Contém no mínimo 1 caractere especial. Os caracteres especiais são: !@#$%^&*()-+
```
Débora digitou uma string aleatória no campo de senha, porém ela não tem certeza
 se é uma senha forte. Para ajudar Débora, construa um algoritmo que informe qual
  é o número mínimo de caracteres que devem ser adicionados para uma string
   qualquer ser considerada segura.

## Exemplo:

#### Entrada
```C
Ya3
```

#### Saída
```C
3
```

Para mudar a senha, altere a função main do arquivo `q2.c` como
 no exemplo abaixo:
<br>

<img src="https://github.com/andersonhsporto/Cap-Desafio-de-programacao/blob/main/images/main2.png" width="400" height=auto/>

<br>
<hr>

# Questão 03

Duas palavras podem ser consideradas anagramas de si mesmas se as
 letras de uma palavra podem ser realocadas para formar a outra palavra.
  Dada uma string qualquer, desenvolva um algoritmo que encontre o número
   de pares de substrings que são anagramas.



## Exemplo:

#### Entrada
```C
ifailuhkqq
```

#### Saída
```C
3
```

Para mudar a string altere a função main do arquivo `q3.c` como no exemplo abaixo:
<br>
<img src="https://github.com/andersonhsporto/Cap-Desafio-de-programacao/blob/main/images/main3.png" width="400" height=auto align="auto"/>
<br>
<br>

Para compilar os 3 exercicios utilize o comando `make`
```
Para compilar o primeiro exercício utilize o comando: make 1
Para compilar o segundo exercício utilize o comando:  make 2
Para compilar o terceiro exercício utilize o comando: make 3

Para limpar os aquivos compilador utilize o comando:  make clean
```

Para executar os binarios compilados: `./questao_X`