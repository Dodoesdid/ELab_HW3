#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void saveBomb(int saveBomb)
    {
        bomb = saveBomb;
    }

    int getBomb()
    {
        return bomb;
    }

    void tick();
protected:
	int bomb;
    ModelListener* modelListener;
};

#endif // MODEL_HPP
