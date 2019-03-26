#include <iostream> 
#include <string> 


class Pizza {
  public: 
    virtual void bake()=0; 
    virtual void addTopings()=0; 
    virtual void serve()=0; 
};

class VeggiePizza : public Pizza {
  public: 
    void bake() {
      std::cout << "Baking Veggie pizza" << std::endl; 
    } 

    void addTopings() {
      std::cout << "Add topings veggie pizza" << std::endl; 
    }

    void serve() {
      std::cout << "Serve veggie pizza " << std::endl; 
    }

};

class CheesePizza : public Pizza {
  public: 
    void bake() {
      std::cout << "Baking Cheese pizza" << std::endl; 
    } 

    void addTopings() {
      std::cout << "Add topings Cheese pizza" << std::endl; 
    }

    void serve() {
      std::cout << "Serve Cheese pizza " << std::endl; 
    }

};

class PizzaFactory {
  public: 
    Pizza* CreatePizza(std::string type) {

      if(type == "veggie") {
        return new VeggiePizza; 
      } 
      else if (type == "cheese") {
        return new CheesePizza; 
      }
    }
};
// -------------------------------------

class PizzaStore {
  public: 
    PizzaStore() {
      _factory = new PizzaFactory; 
    }
    void MakePizza(std::string type) {
      Pizza *myPizza = _factory->CreatePizza(type); 

      myPizza->bake();
      myPizza->addTopings();
      myPizza->serve(); 
    }

  private: 
    PizzaFactory *_factory;     
};
