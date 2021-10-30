main: main.o StrManipulate.o App.o Judge.o QuestionGen.o UserIO.o
	g++  -o main main.o StrManipulate.o App.o Judge.o QuestionGen.o UserIO.o

main.o : main.cpp
	g++ -c main.cpp

App.o: inc/App.cpp
	g++ -c inc/App.cpp

Judge.o: inc/Judge.cpp
	g++ -c inc/Judge.cpp

QuestionGen.o: inc/QuestionGen.cpp
	g++ -c inc/QuestionGen.cpp

UserIO.o: inc/UserIO.cpp
	g++ -c inc/UserIO.cpp

StrManipulate.o : inc/StrManipulate.cpp
	g++ -c inc/StrManipulate.cpp

clean:
	del *.o -rf