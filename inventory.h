class Inventory : public Commands {
  // public functions
public:
  //constructor
  Inventory();
  //destructor
  virtual ~Inventory();

  //grabs the type of command
  Commands getCommandsTypes() const;

  //checks for correct command type, then collects inventory information to display
  void action(InventoryTrackingSystem* its);

  //print function
  void print() const;
};
