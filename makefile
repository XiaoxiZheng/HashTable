all: hash-table

hash-table: main.cpp hash.h hash.cpp

	g++ -o hash-table main.cpp hash.h hash.cpp

clean:
	rm -rf hash-table.exe

