#CFLAGS=-c -Wall
#LDFLAGS=
#SOURCES=main.c crypting.c function.c
#OBJECTS=$(SOURCES:.c=.o)
#EXECUTABLE=encryption

#all: $(SOURCES) $(EXECUTABLE)

#$(EXECUTABLE): $(OBJECTS)
#	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

#.c.o:
#	$(CC) $(CFLAGS) $< -o $@


#--------------------------------------------------
CC=gcc

# -c = compilation
# -Wall = throws all warnings
CFLAGS=-c -Wall

all: encryption

encryption: main.o function.o crypting.o
	$(CC) main.o function.o crypting.o -o encryption

main.o: main.c
	$(CC) $(CFLAGS) main.c

function.o: function.c
	$(CC) $(CFLAGS) function.c

crypting.o: crypting.c
	$(CC) $(CFLAGS) crypting.c

clean:
	rm *o encryption