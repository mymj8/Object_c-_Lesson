a.out: main.o Vector3d.o
	g++ -o a.out main.o Vector3d.o

main.o: main.cpp
	g++ -c -o main.o main.cpp -lm

Vector3d.o: Vector3d.cpp
	g++ -c -o Vector3d.o Vector3d.cpp -lm


clean:
	rm *.o a.out