.PHONY = all dir

RECC = src/recursion.c
RECH = src/recursion.h
RECO = build/recursion.o
MSAC = src/main_sa.c
MSAO = build/main_sa.o
PROGSA = bin/sum_array
MFIC = src/main_fi.c
MFIO = build/main_fi.o
PROGFI = bin/fibonaci
MNSC = src/main_ns.c
MNSO = build/main_ns.o
PROGNS = bin/number_string

all: clean dir $(PROGSA) $(PROGFI) $(PROGNS)

dir:
	mkdir build
	mkdir bin

$(RECO): $(RECC) $(RECH)
	gcc -o $(RECO) -c $(RECC)

$(MSAO): $(MSAC)
	gcc -o $(MSAO) -c $(MSAC)
$(PROGSA): $(RECO) $(MSAO)
	gcc -Wall -o $(PROGSA) $(RECO) $(MSAO)

$(MFIO): $(MFIC)
	gcc -o $(MFIO) -c $(MFIC)
$(PROGFI): $(RECO) $(MFIO)
	gcc -Wall -o $(PROGFI) $(RECO) $(MFIO)

$(MNSO): $(MNSC)
	gcc -o $(MNSO) -c $(MNSC)
$(PROGNS): $(RECO) $(MNSO)
	gcc -Wall -o $(PROGNS) $(RECO) $(MNSO)

clean:
	rm -rf build bin