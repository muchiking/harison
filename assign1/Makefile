#
# ICS2305 - Utility Library 
# Code for the ICS2305 Projects
#
# Make environment

# INCLUDES=-I.
# CC=gcc
# CFLAGS=-I. -c -g -Wall $(INCLUDES)
# LINKARGS=-lm
# LIBS=-lm
# TARGET=main #target file name

# all:    
#         $(CC) ics2305-assign1-support.c ics2305-assign1-support.h -lm -o $(TARGET)

# clean:
#     rm $(TARGET)
output: ics2305-assign1-support.o 
	gcc ics2305-assign1-support.o -lm -o run
ics2305-assign1-support.o: ics2305-assign1-support.c 
	gcc -c ics2305-assign1-support.c 
clean:
	rm *.o run


