class MovieFactory {
	// public functions
public:
	//calls private methods to create movie
	Movie* createMovie(istream, &stream) {
		// create variables to hold: stock, title, director
		// create a Movie object
		// read the movie type
		// check if it has a correct type
		// if not, delete this line and let the user know about that
		// switch movietypes
		// 	if movie type is F
		// 	     call the create Comedy method
		// 	     break
		// 	if movie type is D
		// 	     call the create Drama method
		// 	     break
		// 	if movie type is C
		// 	     call the create Classics method
		// 	     break
		// 	otherwise,
		// 	     print error
		// 	     return null and break
		//
		// set the director name, movie title, and the stock to the Movie object
		// Return the Movie object
	}

	//private data members
private:
	//creates appropriate movie types
	Comedy* createComedy(istream, &stream){
		// create variables to hold year
		// create a Comedy object
		// set year to the Comedy object
		// return the Comedy object
	}

	Drama* createDrama(istream, &stream){
		// create variables to hold year
		// create a Drama object
		// set year to the Drama object
		// return the Drama object
	}

	Classics* createClassics(istream, &stream){
		// create variables to hold: month, year, firstname, lastname
		// create a Classics object
		// Set firstname, lastname, month, and year to the Classics object
		// return the Classics object
	}
};
