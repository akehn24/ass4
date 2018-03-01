class Customer {
	// public functions
public:
	// constructor
	Customer();
	// destructor
	virtual ~Customer();

	// id getter/setter
	bool setID(int id);
	int getId() const;

	// first and last name getters/setters
	bool setLastName(string lastName);
	string getLastName() const;
	bool setFirstName(string firstName);
	string getFirstName() const;

	// customer history function
	//collects historical data for the Customer to display
	void customerHistory(Transaction &t);

	// operator overload functions
	//assesses alphabetical order of Customers
	Customer& operator<(const Customer &c);
	Customer& operator>(const Customer &c);
	//tells whether two Customers are the same
	bool const Customer& operator==(const Customer &c)
	//returns the opposite of operator ==;
	bool const Customer& operator!=(const Customer &c);

	// private data members
private:
	int id;
	string firstName;
	string lastName;
};
