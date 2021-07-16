#pragma once

#include <iostream>

class ASpell
{
	protected:
		std::string name;
		std::string effects;
		ASpell();
		ASpell()
	public:
		std::string const &getName() const;
		std::string const &getEffects() const;
		virtual ASpell *clone() const = 0;
		virtual ~Aspell();
		ASpell(std::string const &name, std::string const &effects);
};
