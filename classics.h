class Classics : public Movie  {
	// public functions
public:
	// constructor
	Classics();

	// destructor
	virtual ~Classics();

	// getters and setters
	bool setReleaseDate(int date);
	int getReleaseDate();
	bool setMajorActor(string actor);
	string getMajorActor();
	MovieTypes getMoviesType() const;

	// print function
	void print() const;

	// operator overloads
	//assess alphabetical order of movies
	Classics& operator<(const Classics& c);
	Classics& operator>(const Classics& c);
	//assess if two movies are the same
	bool operator==(const Classics& c) const;
	//returns the opposite of operator ==
	bool operator!=(const Classis& c) const;

	// private data members
private:
	int releaseDate;
	string majorActor;
};
