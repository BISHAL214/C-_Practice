#include<iostream>
#include<string>
#include<memory>
using namespace std;

//product

class pizza
{
    public:
    void setDough(const string & dough)
    {
        m_dough = dough;
    }
    void setSause(const string & sause)
    {
        m_sause = sause;
    }
    void setTopping(const string & topping)
    {
        m_topping = topping;
    }
    void open()
    {
        cout<< "Pizz with " << m_dough << " dough, " << m_sause << " sause and" << m_topping << "topping. Mmm" << endl; 
    }
    private:
    string m_dough;
    string m_sause;
    string m_topping;
};

// Abstruct Builder

class PizzaBuilder
{
    protected:
    unique_ptr<pizza> m_pizza;
    public:
    virtual ~PizzaBuilder() {};
    pizza* getpizza()
    {
        return m_pizza.get();
    }
    void CreateNewPizzaProduct()
    {
        m_pizza = make_unique<pizza>();
    }
    virtual void builddough() = 0;
    virtual void buildsause() = 0;
    virtual void buildtopping() = 0;
};

class HawaiianPizzaBuilder : public PizzaBuilder    
{
    public:
    virtual ~HawaiianPizzaBuilder() {};

    virtual void buildDough()
    {
        m_pizza->setDough("cross");
    }
    virtual void buildSause()
    {
        m_pizza->setSause("mild");
    }
    virtual void buildTopping()
    {
        m_pizza->setTopping("ham+pineapple");
    }
};

class SpicyPizzaBuilder : public PizzaBuilder
{
    public:
    virtual ~SpicyPizzaBuilder() {};

    virtual void builDough()
    {
        m_pizza->setDough("pan baked");
    }
    virtual void buildSause()
    {
        m_pizza->setSause("hot");
    }
    virtual void buildTopping()
    {
        m_pizza->setTopping("peperoni+salami");
    }
};

class Cook
{
    private:
	PizzaBuilder* m_pizzaBuilder;

    public:
    void OpenPizza()
    {
        m_pizzaBuilder->getpizza()->open();
    }
    void makePizza(PizzaBuilder* pb)
    {
        m_pizzaBuilder = pb;
		m_pizzaBuilder->CreateNewPizzaProduct();
		m_pizzaBuilder->builddough();
		m_pizzaBuilder->buildsause();
		m_pizzaBuilder->buildtopping();
    }
};

int main()
{
    Cook cook;
    HawaiianPizzaBuilder HawaiianPizzaBuilder;
    SpicyPizzaBuilder    SpicyPizzaBuilder;

    cook.makePizza(&hawaiianPizzaBuilder);
    cook.OpenPizza();

    cook.makePizza(&spicyPizzaBuilder);
    cook.OpenPizza();
}