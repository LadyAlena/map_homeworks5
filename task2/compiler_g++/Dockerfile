FROM ubuntu:latest
    RUN apt-get update
    RUN apt-get -y install g++ nano
    WORKDIR /root/repos/map_homework5/task2/compiler_g++/source
    COPY source .
    RUN g++ -c -o main.o ../source/main.cpp \
        && g++ -c -o Shape.o ../source/shape/Shape.cpp \
        && g++ -c -o Line.o ../source/shape/Line/Line.cpp \
        && g++ -c -o Rectangle.o ../source/shape/Rectangle/Rectangle.cpp \
        && g++ -c -o Parallelepiped.o ../source/shape/Parallelepiped/Parallelepiped.cpp \
        && g++ -c -o Circle.o ../source/shape/Circle/Circle.cpp \
        && g++ -c -o Cylinder.o ../source/shape/Cylinder/Cylinder.cpp
    RUN g++ -o program main.o Shape.o Line.o Rectangle.o Parallelepiped.o Circle.o Cylinder.o
    CMD ["./program"]