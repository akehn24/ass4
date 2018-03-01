class Drama : public Movie  {
	// public functions
public:
	// constructor
	Drama();

	// destructor
	virtual ~Drama();

	// setters/getters
	MovieTypes getMoviesType() const;

	// print
	void print() const;

	// operators
	//assess alphabetical order of movies
	Drama& operator<(const Drama& d);
	Drama& operator>(const Drama& d);
	//assess if two movies are the same
	bool operator==(const Drama& d) const;
	//returns the opposite of operator ==
	bool operator!=(const Drama& d) const;
};
