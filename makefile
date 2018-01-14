all:
	g++ -c src/car_game.cpp -o obj/car_game.o
	g++ -c src/main.cpp -o obj/main.o
	g++ obj/car_game.o obj/main.o -o bin/car_game
