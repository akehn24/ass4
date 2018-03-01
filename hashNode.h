template <typename Key, typename Value>
class HashNode {
	// public functions
public:
	//constructor
	HashNode(const Key& key, const Value& value);
	//destructor
	virtual ~ HashNode();

	//data setters and getters
	void setKey(Key key);
	Key getKey() const;
	void setValue(Value value);
	Value getValue() const;
	void setNext(HashNode* next);
	HashNode* getNext() const;

	//private data members
private:
	Key key;
	Value value;
	HashNode* next;
};
