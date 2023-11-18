#include <iostream>

class Mammal {
public:
	void sound() {
		//let's say that our mammal animal is cat
		std::cout << "Cat says 'meow'." << std::endl;
	}

	void move() {
		std::cout << "Cat walks." << std::endl;
	}
};

class Fish {
public:
	void sound() {
		std::cout << "Fish is on mute" << std::endl;
	}
	void move() {
		std::cout << "Fish swims." << std::endl;
	}
};

class Bird {
public:
	void sound() {
		std::cout << "Bird says 'chik - chirik'." << std::endl;
	}

	void move() {
		std::cout << "Bird flies." << std::endl;
	}
};

int main() {

	Mammal cat;
	cat.sound();
	cat.move();
    
	Fish goldfish;
	goldfish.sound();
	goldfish.move();

	Bird parrot;
	parrot.sound();
	parrot.move();

	return 0;
}