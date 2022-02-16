NAME = QUESTAO_1

all:
	gcc q1.c -o questao_1
	gcc q2.c -o questao_2
	gcc q3.c -o questao_3

1:
	rm -rf questao_1
	gcc q1.c -o questao_1

2:
	rm -rf questao_2
	gcc q2.c -o questao_2

3:
	rm -rf questao_3
	gcc q3.c -o questao_3

clean:
	rm -rf questao_1
	rm -rf questao_2
	rm -rf questao_3