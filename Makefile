TARGET=calculator

all:
	cd src && ${MAKE}
	mv src/${TARGET} ${TARGET}

clean:
	rm -f ${TARGET}
	cd src && ${MAKE} clean
