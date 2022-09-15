#ifndef WRONGWrongAnimal_HPP
# define WRONGWrongAnimal_HPP

# include <iostream>
# include <string>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal & WrongAnimal);
	
	WrongAnimal &operator=(const WrongAnimal & WrongAnimal);

	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif