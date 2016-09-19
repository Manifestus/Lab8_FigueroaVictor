temp: Main.o Articulos.o FyV.o Granos.o Lacteos.o Carnes.o Enlatados.o Lavanderia.o
	g++ Main.o Articulos.o FyV.o Granos.o Lacteos.o Carnes.o Enlatados.o  Lavanderia.o -o temp

Main.o:	Main.cpp FyV.h Granos.h
	g++ -c Main.cpp

Articulos.o:	Articulos.cpp Articulos.h
	g++ -c Articulos.cpp

FyV.o:	FyV.cpp Articulos.h  FyV.h
	g++ -c FyV.cpp

Granos.o:	Granos.cpp Articulos.h  Granos.h
	g++ -c Granos.cpp

Lacteos.o:	Lacteos.cpp Articulos.h  Lacteos.h
	g++ -c Lacteos.cpp

Carnes.o:	Carnes.cpp Articulos.h  Carnes.h
	g++ -c Carnes.cpp

Enlatados.o:	Enlatados.cpp Articulos.h  Enlatados.h
	g++ -c Enlatados.cpp

Lavanderia.o:	Lavanderia.cpp Articulos.h  Lavanderia.h
	g++ -c Lavanderia.cpp