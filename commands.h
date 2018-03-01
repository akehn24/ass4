class Commands {
	// public functions
public:
// constructor
		Commands();

		// destructor
		virtual ~Commands();

		// getter
		virtual CommandsTypes getCommandsTypes() const = 0;

	//private data members
private:
	//stores the types of commands that can be done
enum CommandsTypes {Borrow, Return, History, Inventory};
};
