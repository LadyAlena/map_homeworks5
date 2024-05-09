FROM ubuntu:latest
	RUN apt-get update
	RUN apt-get -y install g++ nano
	WORKDIR /root/repos/map_homework5/task1/source
	COPY source/main.cpp .
	RUN g++ ../source/main.cpp -o program
	CMD ["./program"]