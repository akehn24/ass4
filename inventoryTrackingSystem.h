class InventoryTrackingSystem {
  // public functions
public:
  // read file functions
  void readMoviesFile() {
    // create a string to store the data4movies.txt file
    // using object for reading and writing from a file
    // while not end of file
    // create a Movie object that connects to MovieFactory
    // If movie
    // switch case for movie type
    // case movietype is Comedy
    // using dynamic_cast to catch the Comedy type
    // insert the movie into the multimap of Comedy
    // break
    // case movietype is Drama
    // using dynamic_cast to catch the Drama type
    // insert the movie into the multimap of Drama
    // break
    // case movietype is Classics
    // using dynamic_cast to catch the Classics type
    // insert the movie into the multimap of Classics
    // break
    // case movietype is NOT in any type
    // throw logic error about that type
    // delete the incorrect type and its line and let the user knows
    // break
  }

  void readcustomersFile() {
    // create a string to store the data4customers.txt file
    // using object for reading and writing from a file
    // while not end of line
    // read the customer id, firstname, lastname
    // insert these customer’s information into the customersHashtable
  }

  void readCommandsFile() {
    // create a string to store the data4commands.txt file
    // using object for reading and writing from a file
    // while not end of line
    // create a Commands object that connects to CommandsFactory
    // If commands
    // switch case for commands type
    // case commadstype is I
    // using dynamic_cast to catch the Commands type
    // break
    // case commadstype is H
    // using dynamic_cast to catch the Drama type
    // break
    // case commadstype is B
    // using dynamic_cast to catch the Classics type
    // break
    // case commadstype is R
    // using dynamic_cast to catch the Classics type
    // break
    // case movietype is NOT in any type
    // throw logic error about that type
    // delete the incorrect type and its line and let the user knows
    // break
  }

  //private data members
private:
  // maps for movie type storage
  std::multimap<Comedy> comedyMap;
  std::multimap<Drama> dramaMap;
  std::multimap<Classics> classicsMap;
  std::hashtable<Customer> customersHashtable
};
