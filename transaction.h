class Transaction : public Commands {
	// public functions
public:
//setters and getters
bool setCustomerID(int id);
int getCustomerID() const;
transactionType getTransactionType() const;

//private data members
private:
	int cusomerID;
	//stores the types of transactions that can be done
	enum transactionType(Borrow, Return);
	//stores the different transactions that are performed by the system
	stack<transactionType, Movie*> trans;
};

/*
Class Borrow : public Transactions {
	// public functions
public:
//constructor
	Borrow();
	//destructor
	virtual ~Borrow();

	//grabs the type of command
	Commands getCommandsTypes() const;
	//checks for correct command type, then decreases the stock
	void action(InventoryTrackingSystem* its) {
		If (check getCommandsTypes == B)
getDecreaseStock()
	}

	//changes stock size
	int getDecreaseStock();

	//print function
void print() const;
};
*/

/*
Class Return : public Transactions {
	// public functions
public:
	//constructor
	Return();
	//destructor
	virtual ~Return();

	//grabs the type of command
	Commands getCommandsTypes() const;
	//checks for correct command type, then increase the stock
	void action(InventoryTrackingSystem* its);

	//changes stock size
	int getIncreaseStock();

	//print function
	void print() const;
};
*/
