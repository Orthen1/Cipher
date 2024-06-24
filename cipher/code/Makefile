.PHONY:clean, encode, decode, all

all:encode decode 
	make $^	

clean: encode decode
	rm -rf $^ *.txt $#

encode: encoder.c main.h 
	gcc -fstack-protector $^ -o $@ $#

decode: decoder.c main.h
	gcc -fstack-protector $^ -o $@ $#



