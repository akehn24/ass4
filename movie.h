class Movies {
	// public functions
public:
	enum MovieTypes {Comedy, Drama, Classics};

	// constructor
	Movie();
	
	// destructor
	virtual ~Movie();

	// setters/getters
	virtual bool setStock(int stock) = 0;
	virtual int getStock() const = 0;

	virtual bool setDirector(string director) = 0;
	virtual string getDirector() const = 0;

	virtual bool setTitle(string title) = 0;
	virtual string getTitle() const = 0;

	virtual bool setYear(int year) = 0;
	virtual int getYear() const = 0;

	virtual MovieTypes getMoviesType() const = 0;
	MediaType getMediaType() const = 0;

	//private data members
private:
	int stock;
	string director;
	string title;
	int year;
};
