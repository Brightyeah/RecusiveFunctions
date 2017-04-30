.PHONY = all dir

SAC = src/sum_array.c
SAO = build/sum_array.o
SAH = src/sum_array.h
MIC = src/main_sa.c
MIO = build/main_sa.o
PROGSA = bin/sum_array

all: clean dir $(PROGSA)

dir:
	mkdir build
	mkdir bin

$(SAO): $(SAC) $(SAH)
	gcc -o $(SAO) -c $(SAC)

$(MIO): $(MIC)
	gcc -o $(MIO) -c $(MIC)

$(PROGSA): $(SAO) $(MIO)
	gcc -Wall -o $(PROGSA) $(SAO) $(MIO)

clean:
	rm -rf build bin