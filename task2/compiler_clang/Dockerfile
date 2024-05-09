FROM ubuntu:latest
	RUN apt-get update
	RUN apt-get -y install clang nano
	WORKDIR /root/repos/map_homework5/task2/compiler_clang/source
	COPY source .
    RUN clang++ -c -o main.o ../source/main.cpp
    RUN clang++ -c -o Shape.o ../source/shape/Shape.cpp
    RUN clang++ -c -o Line.o ../source/shape/Line/Line.cpp
    RUN clang++ -c -o Rectangle.o ../source/shape/Rectangle/Rectangle.cpp
    RUN clang++ -c -o Parallelepiped.o ../source/shape/Parallelepiped/Parallelepiped.cpp
    RUN clang++ -c -o Circle.o ../source/shape/Circle/Circle.cpp
    RUN clang++ -c -o Cylinder.o ../source/shape/Cylinder/Cylinder.cpp

    RUN clang++ -o program main.o Shape.o Line.o Rectangle.o Parallelepiped.o Circle.o Cylinder.o

    CMD ["./program"]