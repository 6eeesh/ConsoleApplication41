#include <iostream>
#include <string>

using namespace std;

class MobilePhone {
private:
    int battery; // диапазон значений 0-100
    string model;
    double price; // неотрицательная цена

public:
    void SetBattery(int b) {
        // сеттер для установки заряда батареи
        if (b >= 0 && b <= 100) {
            battery = b;
        }
        else {
            cout << "Недопустимое значение для заряда батареи (должно быть в диапазоне 0-100)!\n";
        }
    }

    int GetBattery() const {
        // геттер для получения заряда батареи
        return battery;
    }

    void SetModel(string m) {
        // сеттер для установки модели
        model = m;
    }

    string GetModel() const {
        // геттер для получения модели
        return model;
    }

    void SetPrice(double p) {
        // сеттер для установки цены
        if (p >= 0) {
            price = p;
        }
        else {
            cout << "Недопустимое значение для цены (должно быть неотрицательным)!\n";
        }
    }

    double GetPrice() const {
        // геттер для получения цены
        return price;
    }
};

int main() {
    MobilePhone m;

    // Пример использования сеттеров и геттеров
    m.SetBattery(75);
    m.SetModel("iPhone 16 Pro");
    m.SetPrice(20000);

    // Пример вывода значений с использованием геттеров
    cout << "Battery: " << m.GetBattery() << "%\n";
    cout << "Model: " << m.GetModel() << "\n";
    cout << "Price: $" << m.GetPrice() << "\n";

    return 0;
}
