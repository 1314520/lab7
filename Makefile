Tetris:Tetris.cpp genMino.o
	g++ -o Tetris  Tetris.cpp genMino.o genMino.h Mino.o MinoI.o MinoJ.o MinoT.o

genMino.o: genMino.cpp genMino.h Mino.o MinoI.o MinoJ.o MinoT.o 
	g++ -c genMino.cpp  
Mino.o:Mino.h Mino.cpp
	g++ -c Mino.cpp 
MinoI.o:MinoI.h MinoI.cpp Mino.h
	g++ -c MinoI.cpp 
MinoJ.o:MinoJ.h MinoJ.cpp Mino.h
	g++ -c MinoJ.cpp 
MinoT.o:MinoT.h MinoT.cpp Mino.h
	g++ -c MinoT.cpp
