class CommandsFactory {
	// public functions
public:
	Commands* createCommandsType(istream, &stream,
		inventoryTrackingSystem* its){
			// create variables to hold commands types
			// create a Commands object
			// read the commands type
			// check if it has a correct type
			// if not, delete this line and let the user know about that
			// switch commands types
			// 	if movie type is I
			// 	     call the create Inventory method
			// 	     break
			// 	if movie type is H
			// 	     call the create History method
			// 	     break
			// 	if movie type is R
			// 	     call the create Return method
			// 	     break
			// if movie type is B
			// 	     call the create Borrow method
			// 	     break
			// 	otherwise,
			// 	     print error
			// 	     return null and break
			// return the commands type
		}


		// private data members
	private:
		// create appropriate commands
		Borrow* createBorrow(istream, &stream, inventoryTrackingSystem* its) {
			// 	create variable to hold the customer id
			// 	check if it has correct type of media
			// 	    if not, let the user know and delete this line
			// 	read the movietype, and check if it has correct type
			// 	switch case to find the specific movie type to check if the movie exits
			// 		if movie type is F
			// 	     call the findComedy method
			// 	     break
			// 	if movie type is D
			// 	     call the findDrama method
			// 	     break
			// 	if movie type is C
			// 	     call the findClassics method
			// 	     break
			// 	otherwise,
			// 	     print error
			// 	     return null and break
			// create a new Transaction object that connects to Borrow
			// set customerId
			// get decrease stock
			// return borrow
		}

		Return* creatReturn(istream, &stream, inventoryTrackingSystem* its);
		// similar to the Borrow
		History* createHistory(istream, &stream, inventoryTrackingSystem* its){
			// 	create variable to hold the customer id
			// 	create a new History object that connects to History
			// set customerId
			// return history
		}

		Inventory* createInventory(istream, &stream, inventoryTrackingSystem* its);
		//similar to the History

		//find movies by their type
		Comedy* findComedyMovies(istream, &stream, inventoryTrackingSystem* its);
		Drama* findDramaMovies(istream, &stream, inventoryTrackingSystem* its);
		Classics* findClassicsMovies(istream, &stream, inventoryTrackingSystem* its);
	};
