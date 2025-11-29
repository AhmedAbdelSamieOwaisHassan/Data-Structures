//header file
class List
{ 
private:
	// Data Memebers
	   class node
	   {
		public:
			int key; 		
			char data;	
			node *next;	
		};

	node *head, *cursor, *prev;
	
	//exercises
	int List_Size2( node *h) ;
	int Display( node  *h);



	public:

	// Member Functions
	
	List();

	~List();

	// Functions Prototype Definitions

	bool listIsEmpty() const;  //check if is empty
	bool curIsEmpty() const;   //check if cursor is empty 
	void toFirst();     //set cursor to first node
	bool atFirst() const; //check if cursor at first
	void advance();    ///to advance to the next node
	void toEnd();    //to move the cursor to the end node
	bool atEnd() const;// return true if the current node is the  
	int  listSize() ;//return number of  nodes in the List
	void updateData( char  );//
	void retrieveData(char &, int &) const;//
	void retrieveKey(int &) const;//
	void insertFirst(const int &, const char & );//
	void insertAfter(const int &, const char & );//
	void insertBefore(const int &, const char& );//
	void insertEnd(const int &, const char & );//
	void deleteNode();//
	void deleteFirst();//
	void deleteEnd();//
	void makeListEmpty();//
	bool search(const int & );//
	void orderInsert(const char &, const int & );//
	void traverse();//
	

	//exercises
	void reverse();
	int getMiddle();
	
	bool Sortedlist();
	void selectionSort();
	void insertionSort();


	//exercises
	int Recursive_List_Size( ) ;
	int  DispalyList() ;

	};
	




