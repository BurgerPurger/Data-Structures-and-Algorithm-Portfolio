#include <iostream>
#include <string>

//class for Fruit
class Fruit {
    private:
        std::string fruitName;
        float fruitPrice;
        int fruitQuantity;

    public:
        //Constructor
        Fruit(std::string newFruitName = "Apple", float newFruitPrice = 0, int newFruitQuantity = 0){
            fruitName = newFruitName;
            fruitPrice = newFruitPrice;
            fruitQuantity = newFruitQuantity;
            std::cout << "Fruit Constructor Called" << std::endl;
        }

        //Destructor
        ~Fruit(){
            std::cout << "Fruit Destructor Called" << std::endl;
        }

        //Copy Constructor
        Fruit(const Fruit &copyFruit){
            fruitName = copyFruit.fruitName;
            fruitPrice = copyFruit.fruitPrice;
            fruitQuantity = copyFruit.fruitQuantity;
            std::cout << "Fruit Copy Constructor Called" << std::endl;
        }

        //Copy Assignment Operator
        Fruit& operator = (const Fruit &copyFruit){
            if(this != &copyFruit){
                fruitName = copyFruit.fruitName;
                fruitPrice = copyFruit.fruitPrice;
                fruitQuantity = copyFruit.fruitQuantity;
                std::cout << "Fruit Copy Assignment Called" << std::endl;
            }
            return *this;
        }

        float fruitCalculateSum(){
            return fruitPrice * fruitQuantity;
        }

        void printDetails(){
            std::cout << fruitName << " PHP " << fruitPrice << " x " << fruitQuantity << std::endl;
        }
};

class Vegetable{
    private:
        float vegetablePrice;
        int vegetableQuantity;
        std::string vegetableName;

    public:
        //Constructor
        Vegetable(std::string newVegetableName = "Broccoli", float newVegetablePrice = 0, int newVegetableQuantity = 0){
            vegetableName = newVegetableName;
            vegetablePrice = newVegetablePrice;
            vegetableQuantity = newVegetableQuantity;
            std::cout << "Vegetable Constructor Called" << std::endl;
        }

        //Destructor
        ~Vegetable(){
            std::cout << "Vegetable Destructor Called" << std::endl;
        }

        //Copy Constructor
        Vegetable(const Vegetable &copyVegetable){
            vegetableName = copyVegetable.vegetableName;
            vegetablePrice = copyVegetable.vegetablePrice;
            vegetableQuantity = copyVegetable.vegetableQuantity;
            std::cout << "Vegetable Copy Called" << std::endl;
        }

        //Copy Assignment Operator
        Vegetable& operator = (const Vegetable &copyVegetable){
            if(this != &copyVegetable){
                vegetableName = copyVegetable.vegetableName;
                vegetablePrice = copyVegetable.vegetablePrice;
                vegetableQuantity = copyVegetable.vegetableQuantity;
                std::cout << "Vegetable Copy Assignment Called" << std::endl;
            }
            return *this;
        }

        float vegetableCalculateSum(){
            return vegetablePrice * vegetableQuantity;
        }

        void printDetails(){
            std::cout << vegetableName << " PHP " << vegetablePrice << " x " << vegetableQuantity << std::endl;
        }
};

float totalSum(Fruit fruits[], int fruitSize, Vegetable vegetables[], int vegetableSize){
    float total = 0;

    for(int i = 0; i < fruitSize; i++){
        total += fruits[i].fruitCalculateSum();
    }

    for(int i = 0; i < vegetableSize; i++){
        total += vegetables[i].vegetableCalculateSum();
    }

    return total;
}

int main(){
    const int fruitArraySize = 2;

    Fruit groceryFruitList[fruitArraySize];

    std::string fruitNames[fruitArraySize] = {"Apple","Banana"};
    float fruitPrices[fruitArraySize] = {10.0,10.0};
    int fruitQuantity[fruitArraySize] = {7,8};

    for(int i = 0; i < fruitArraySize; i++){
        Fruit *ptr = new Fruit(fruitNames[i], fruitPrices[i], fruitQuantity[i]);
        groceryFruitList[i] = *ptr;
        delete ptr;
        ptr = nullptr;
    }

    const int vegetableArraySize = 2;

    // Made into Dynamic Array to Remove Lettuce
    Vegetable *groceryVegetableList = new Vegetable[vegetableArraySize];

    std::string vegetableNames[vegetableArraySize] = {"Broccoli","Lettuce"};
    float vegetablePrices[vegetableArraySize] = {60.0,50.0};
    int vegetableQuantity[vegetableArraySize] = {12,10};

    for(int i = 0; i < vegetableArraySize; i++){
        Vegetable *ptr = new Vegetable(vegetableNames[i], vegetablePrices[i], vegetableQuantity[i]);
        groceryVegetableList[i] = *ptr;
        delete ptr;
        ptr = nullptr;
    }

    std::cout << "\nFRUITS\n";
    for(int i = 0; i < fruitArraySize; i++){
        groceryFruitList[i].printDetails();
    }

    std::cout << "\nVEGETABLES\n";
    for(int i = 0; i < vegetableArraySize; i++){
        groceryVegetableList[i].printDetails();
    }

    std::cout << "\nTotal: PHP " << totalSum(groceryFruitList, fruitArraySize, groceryVegetableList, vegetableArraySize) << std::endl;

    // Delete Lettuce
    Vegetable *newList = new Vegetable[1];
    newList[0] = groceryVegetableList[0];

    delete[] groceryVegetableList;
    groceryVegetableList = newList;

    const int newVegetableArraySize = 1;

    std::cout << "\nAfter Deleting Lettuce\n";
    std::cout << "\nFRUITS\n";
    for(int i = 0; i < fruitArraySize; i++){
        groceryFruitList[i].printDetails();
    }

    std::cout << "\nVEGETABLES\n";
    for(int i = 0; i < newVegetableArraySize; i++){
        groceryVegetableList[i].printDetails();
    }

    std::cout << "\nTotal: PHP " << totalSum(groceryFruitList, fruitArraySize, groceryVegetableList, newVegetableArraySize) << std::endl;

    // Deallocate remaining memory
    delete[] groceryVegetableList;
    groceryVegetableList = nullptr;

    return 0;
}