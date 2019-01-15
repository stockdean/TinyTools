
class Singleton{
	
public:
	virtual ~Singleton();
	Singleton *m_Singleton;

	static Singleton* getInstance();

private:
	static Singleton * instance;

	Singleton();
	
};

