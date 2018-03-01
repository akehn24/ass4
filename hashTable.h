template <typename Key, typename Value>
class HashTable {
	// public functions
public:
	//constructor
	HashTable();
	//destructor
	virtual ~HashTable();

	//adds a new item to the hash table via the hashing formula
	bool add(const Key& key, const Value& value);

	//removes an item from the hash table
	bool remove(const Key& key);

	//getters
	Value getValue(const Key& key);
	Key getKey(const Value& value);
	int getSize() const;

	//private data members
private:
	HashNode<Key, Value>* node;

};
