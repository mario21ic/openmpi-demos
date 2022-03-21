# openmpi-demos

sudo apt install openmpi-bin libopenmpi-dev -y
ompi_info

mpiCC -g -Wall -o HelloWorld 1-hello.cpp
mpiexec ./HelloWorld
mpiexec -n 10 ./HelloWorld
