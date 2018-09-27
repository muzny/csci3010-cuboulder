#ifndef _EARTH_H_
#define _EARTH_H_


class Earth {
public:
	
	static Earth& GetInstance() {
		// gets instantiated the first time
		static Earth instance; // guaranteed to be destroyed

		return instance;
	}

    int get_population() { return population_; };

    void IncreasePopulation() { population_ += 1; };

	// Delete the methods we don't want
	Earth(Earth const&) = delete; // copy constructor
	void operator=(Earth const&) = delete; // assignment operator

 private:
 	Earth();  // private constructor

    int population_;
  
};  // class Earth

#endif  // _EARTH_H_

