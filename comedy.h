class Comedy : public Movie {
// public functions
public:
	// constructor
	Comedy();
	// destructor
	virtual ~Comedy();

	// print function
	void print() const;

	// get movie type function
	MovieTypes getMoviesType() const;

		// operator overload functions
		//assess alphabetical order of movies
		Comedy& operator<(const Comedy &f);
		Comedy& operator>(const Comedy &f);
		  //assess if two movies are the same
		bool const Comedy& operator!=(const Comedy &f);
  //returns the opposite of operator ==
		bool const Comedy& operator==(const Comedy &f);
};
