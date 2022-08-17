#*******************************************************
# Fecha 02 - Agosto - 2022
# Autor: Juan Camilo Rodriguez Fonseca
# Materia: Parallel and Distributed Computing
# Tema: Introducción a lenguaje de programación C
# Objetivo: Script automatización compilación
#*******************************************************

GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
MATHFLAG = -lm

PROGS = Taller_C_01_JCRF_main


all: $(PROGS)

Taller_C_01_JCRF_main:
	$(GCC) $(FLAGS) -c $@.c 
	$(GCC) $(FLAGS) -c Taller_C_01_JCRF_lib.c 
	$(GCC) $(FLAGS) -o $@ $@.o Taller_C_01_JCRF_lib.o $(MATHFLAG)
	
clean:
	$(RM) *.o $(PROGS)
