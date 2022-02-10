main.o: main.cpp
	g++ -o main main.cpp -g

clean:
	rm main.o
