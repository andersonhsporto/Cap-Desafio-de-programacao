#  Desafio de programação 02

# Questão 01

Desenvolva um algoritmo que encontre a mediana.

## Exemplo:

#### Entrada
```C
	arr = [9, 2, 1, 4, 6]
```

#### Saída
```C
4
```

#### Utilização

Após compilar utilizando make execute o binário questao_1 da seguinte forma:
O parametro é vetor de inteiros. 
```
	./questao_1 9 2 1 4 6
```

<hr>

# Questão 02

Dado um vetor de inteiros n e um inteiro qualquer x. Construa um algoritmo que determine o número de elementos pares do vetor que tem uma diferença igual ao valor de x;


## Exemplo:

#### Entrada
```C
	n[] = {1, 5, 3, 4, 2}, x = 3
```

#### Saída
```C
	3
```

#### Utilização

Após compilar utilizando make execute o binário questao_2 da seguinte forma:
O parametro é o numero x seguido do vetor de inteiros. 
```
	./questao_2 3 1 5 3 4 2
```


<hr>

# Questão 03

Um texto precisa ser encriptado usando o seguinte esquema. Primeiro, os espaços são removidos do texto. Então, os caracteres são escritos em um grid, no qual as linhas e colunas tem as seguintes regras:

- Considere T, como o tamanho do texto.
- Se certifique de que linhas x colunas >= .
- Se múltiplos grids satisfazem as condições, escolha aquele com a menor área.

Escreva um algoritmo que ao receber uma string s, mostre a mensagem encriptada de acordo com as regras descritas.
## Exemplo:

#### Entrada
```C
    s = tenha um bom dia
```

#### Saída
```C
    taoa eum nmd hbi
```

#### Utilização

Após compilar utilizando make execute o binário questao_3 da seguinte forma:
O parametro é a frase a ser encriptada
```
	./questao_3 "tenha um bom dia" 
```



# Compilação
Para compilar os 3 exercicios utilize o comando `make`
```
Para compilar somente o primeiro exercício  utilize o comando: make 1
Para compilar somente o segundo exercício utilize o comando:  make 2
Para compilar somente o terceiro exercício utilize o comando: make 3

Para limpar os aquivos compilados utilize o comando:  make clean
```




