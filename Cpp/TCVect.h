#pragma once


template<class T> class TCVect
{


public:
	TCVect(T abs=0, T ord=0);
	~TCVect();
	void affiche() const;	
	void setX(T &abs);
	void setY(T &ord);
	T getX()const ;
	T getY()const ;

	
	friend inline TCVect operator+(const TCVect& v1, const TCVect& v2)
	{
		//code
		return TCVect();
	}

	

	
	

	

private:
	T m_x;
	T m_y;

	
};

//Constructeur
template<class T>
inline TCVect<T>::TCVect(T abs, T ord)
{
	m_x = abs;
	m_y = ord;
}

//Destructeur
template<class T>
inline TCVect<T>::~TCVect()
{
}


//Methodes

template<class T>
inline void TCVect<T>::affiche() const
{
	std::cout << "X:" << m_x << " Y : " << m_y;
	std::cout << std::endl;
}


inline void TCVect<char>::affiche() const
{
	std::cout << "X:" << static_cast<int>(m_x) << " Y : " << static_cast<int>(m_y);
	std::cout << std::endl;
}


template<class T>
inline void TCVect<T>::setX(T& abs)
{
	m_x = abs;
}

template<class T>
inline void TCVect<T>::setY(T& ord)
{
	m_y = ord;
}

template<class T>
inline T TCVect<T>::getX() const
{
	return m_x;
}

template<class T>
inline T TCVect<T>::getY() const
{
	return m_y;
}

