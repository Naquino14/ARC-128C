test: test/test.c lib
	cd build && make ARC-128C-test

lib: src/ARC-128C.c
	cd build && make ARC-128C

clean:
	cd build && make clean