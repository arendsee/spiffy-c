CFLAGS=-Wall -g -O2
CC=gcc
TARGET=calculator
OBJECTS=main.o calculate.o util.o

${TARGET}: ${OBJECTS}
	${CC} -o ${TARGET} ${CFLAGS} ${OBJECTS}

clean:
	rm -f ${OBJECTS} *.{gch,o}
