#include <iostream>

using namespace std;

class TEl {
  friend class Tlist;
  char a;
  TEl *next;
public:
    TEl(char a_ = "NULL");
};

TEl::TEl(){
  next = NULL;
}

class TList {
  TEl* first;
  int size = 0;
public:
    TList(int size_ = 0);
    ~TList();
    void create();
    void print();
    void add();
    void sum();
    void destroy();
};

  void TList::create() {
    if (first) {
        cout << "Список уже создан." << endl;
        return;
    }
    int element;
    cout << "Введите 12 чисел:" << endl;  
      for (int i = 0; i < 12; ++i) {
        cin >> element;
        size++;
        }
}

int main() {
    TList myList;
    int choice;
    do {
        cout << "0 - выход, 1 - создать список, 2 - распечатать список, 3 - добавить элемент, 4 - уничтожить список, 5 - подсчитать сумму элементов с нечетным содержимым" << endl;
        cin >> choice;

        switch (choice) {
            case 0:
                break;
            case 1:
                myList.create();
                break;
            case 2:
                myList.print();
                break;
            case 3:
                int position;
                cout << "Введите позицию для вставки элемента: ";
                cin >> position;
                myList.add(position);
                break;
            case 4:
                myList.destroy();
                break;
            case 5:
                cout << "Сумма элементов с нечетным содержимым: "; myList.sum() << endl;
                break;
            default:
                cout << "Неверный выбор." << endl;
        }
    } while (choice!= 0);

    return 0;
}
