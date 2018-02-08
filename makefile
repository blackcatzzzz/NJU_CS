all:representation32 representation64

representation32:representation.c
	gcc -m32 -o representation32 representation.c

representation64:representation.c
	gcc -o representation64 representation.c

clean:
	rm representation32 representation64
