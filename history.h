class History : public Commands {
	// public functions
public:
	//constructor
	History();
	//destructor
	virtual ~History();

	//grabs the type of command
	Commands getCommandsTypes() const;

	//checks for correct command type, then collects inventory information for the Customer class
	void action(InventoryTrackingSystem* its);

	//print function
	void print() const;
};
