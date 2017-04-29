.PHONY = all dir clean

$(SAI) = sum_array_it.c
$(SAR) = sum_array_rec.c
$(SAIO) = sum_array_it.o
$(SARO) = sum_array_rec.o
$(PROG) = sum_array

all: clean dir $(PROGSAI) $(PROGSAR)

dir:
	mkdir build bin

$(SAIO): $(SAI)
	gcc -c $< -o $@

$(SARO): $(SAR)
	gcc -c $< -o $@

$(PROG): $(SAIO) $(SARO)
	gcc -Wall -c $< -o $@

clean:
	rm -rf build bin