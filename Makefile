CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.c crypting.c function.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=encryption

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@
