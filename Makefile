CC = gcc
CFLAGS = -Wall
LDFLAGS =
OBJFILES = arbre.o dico.o main.o
TARGET = Dictionary_Tree_Project
all: $(TARGET)
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~