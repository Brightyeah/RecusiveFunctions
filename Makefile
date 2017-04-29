.PHONY = all dir clean

$(SAC) = sum_array.c
$(SAO) = sum_array.o
$(SAH) = sum_array.h
$(PROGSA) = sum_array

all: clean dir $(PROGSA)

dir:
	mkdir build bin

$(SAO): $(SAC) $(SAH)
	gcc -c $(SAC) -o $@

$(PROG): $(SAO)
	gcc -Wall $< -o $@

clean:
	rm -rf build bin