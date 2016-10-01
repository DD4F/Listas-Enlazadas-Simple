CXX=g++
CXXFLAGS= -Werror -Wall -Wextra

Empresa: main.cpp Empleado.cpp ListaEmpleado.cpp
	$(CXX) $(CXXFLAGS) -o $@ $?

.PHONY: clean
clean:
	rm -f Empresa
