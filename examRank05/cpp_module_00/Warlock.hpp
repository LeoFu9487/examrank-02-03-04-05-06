#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>

class Warlock
{
	private:
		std::string	name;
		std::string	title;
		Warlock();
		Warlock(Warlock const & copy);
		Warlock &operator=(Warlock const &copy);
	public:
		std::string const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const & title);
		Warlock(std::string const & name, std::string const & title);
		virtual ~Warlock();
		void	introduce() const;
};


#endif
