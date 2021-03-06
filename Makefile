CC=g++
CFLAGS=-std=c++11 -Wall
TARGET= programa_final

DOCTEST_DIR = /home/ozymandias/C++/projeto_PDSII/doctest-master/doctest
BUILDLOGIN_DIR = /home/ozymandias/C++/projeto_PDSII/build/folhaLogin
BUILDMAINUSR_DIR = /home/ozymandias/C++/projeto_PDSII/build/mainUsuario
BUILDENTIDADES_DIR = /home/ozymandias/C++/projeto_PDSII/build/entidades
BUILDTESTES_DIR = /home/ozymandias/C++/projeto_PDSII/build/testes
SRC_DIR = /home/ozymandias/C++/projeto_PDSII/src
INCLUDE_DIR = /home/ozymandias/C++/projeto_PDSII/include
ROOT_DIR = /home/ozymandias/C++/projeto_PDSII
BIN_DIR = /home/ozymandias/C++/projeto_PDSII/bin
PROG_DIR = /home/ozymandias/C++/projeto_PDSII/program

#vpl_execution

${BIN_DIR}/${TARGET} : ${BUILDENTIDADES_DIR}/Produto.o ${BUILDENTIDADES_DIR}/Estoque.o ${BUILDENTIDADES_DIR}/Cliente.o ${BUILDENTIDADES_DIR}/Vendas.o ${BUILDENTIDADES_DIR}/Repositor.o ${BUILDENTIDADES_DIR}/Funcionario.o ${BUILDENTIDADES_DIR}/Caixa.o ${BUILDENTIDADES_DIR}/Gerente.o ${BUILDENTIDADES_DIR}/main.o 
	${CC} ${CFLAGS} -o ${ROOT_DIR}/${TARGET} ${BUILDENTIDADES_DIR}/*.o

${BUILDENTIDADES_DIR}/Produto.o : ${INCLUDE_DIR}/Produto.hpp ${SRC_DIR}/entidades/Produto.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Produto.cpp -o ${BUILDENTIDADES_DIR}/Produto.o

${BUILDENTIDADES_DIR}/Estoque.o : ${INCLUDE_DIR}/Estoque.hpp ${INCLUDE_DIR}/Exceptions.hpp ${SRC_DIR}/entidades/Estoque.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Estoque.cpp -o ${BUILDENTIDADES_DIR}/Estoque.o

${BUILDENTIDADES_DIR}/Cliente.o : ${INCLUDE_DIR}/Cliente.hpp ${SRC_DIR}/entidades/Cliente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Cliente.cpp -o ${BUILDENTIDADES_DIR}/Cliente.o

${BUILDENTIDADES_DIR}/Vendas.o : ${INCLUDE_DIR}/Vendas.hpp ${SRC_DIR}/entidades/Vendas.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Vendas.cpp -o ${BUILDENTIDADES_DIR}/Vendas.o

${BUILDENTIDADES_DIR}/Repositor.o : ${INCLUDE_DIR}/Repositor.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Exceptions.hpp ${SRC_DIR}/entidades/Repositor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Repositor.cpp -o ${BUILDENTIDADES_DIR}/Repositor.o

${BUILDENTIDADES_DIR}/Funcionario.o : ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Funcionario.hpp ${SRC_DIR}/entidades/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Funcionario.cpp -o ${BUILDENTIDADES_DIR}/Funcionario.o

${BUILDENTIDADES_DIR}/Caixa.o : ${INCLUDE_DIR}/Caixa.hpp ${INCLUDE_DIR}/Caixa.hpp ${SRC_DIR}/entidades/Caixa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Caixa.cpp -o ${BUILDENTIDADES_DIR}/Caixa.o

${BUILDENTIDADES_DIR}/Gerente.o : ${INCLUDE_DIR}/Gerente.hpp ${INCLUDE_DIR}/Gerente.hpp ${SRC_DIR}/entidades/Gerente.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/entidades/Gerente.cpp -o ${BUILDENTIDADES_DIR}/Gerente.o

${BUILDENTIDADES_DIR}/main.o : ${INCLUDE_DIR}/Produto.hpp ${INCLUDE_DIR}/Estoque.hpp ${INCLUDE_DIR}/Cliente.hpp ${INCLUDE_DIR}/Vendas.hpp ${INCLUDE_DIR}/Repositor.hpp ${INCLUDE_DIR}/Funcionario.hpp ${INCLUDE_DIR}/Caixa.hpp ${INCLUDE_DIR}/Gerente.hpp ${PROG_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${PROG_DIR}/main.cpp -o ${BUILDENTIDADES_DIR}/main.o

#use 'make clean' para usar a função de limpeza
clean: 
	rm -f ${BUILD_DIR}/*