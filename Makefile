.PHONY = all dir

SAC = src/sum_array.c
SAO = build/sum_array.o
SAH = src/sum_array.h
MSAC = src/main_sa.c
MSAO = build/main_sa.o
PROGSA = bin/sum_array

FIC = src/fibonachchi.c
FIO = build/fibonachchi.o
FIH = src/fibonachchi.h
MFIC = src/main_fi.c
MFIO = build/main_fi.o
PROGFI = bin/fibonachchi

all: clean dir $(PROGSA) $(PROGFI)

dir:
	mkdir build
	mkdir bin

$(SAO): $(SAC) $(SAH)
	gcc -o $(SAO) -c $(SAC)
$(MSAO): $(MSAC)
	gcc -o $(MSAO) -c $(MSAC)
$(PROGSA): $(SAO) $(MSAO)
	gcc -Wall -o $(PROGSA) $(SAO) $(MSAO)

$(FIO): $(FIC) $(FIH)
	gcc -o $(FIO) -c $(FIC)
$(MFIO): $(MFIC)
	gcc -o $(MFIO) -c $(MFIC)
$(PROGFI): $(FIO) $(MFIO)
	gcc -Wall -o $(PROGFI) $(FIO) $(MFIO)

clean:
	rm -rf build bin