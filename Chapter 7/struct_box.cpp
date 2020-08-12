#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void clearing();
void show(const box a);
void vol(box *a);
void inbox(box *a);

int main()
{
    box mybox;
    cout << "Now you need to make your box";
    inbox(&mybox);
    show(mybox);
    cout << "Your volume is changed";
    vol(&mybox);
    show(mybox);
    return 0;
}

void inbox(box *a)
{
    cout << "\n\t\t--Enter--\n\n" << endl;
    cout << "Name: ";
    cin.getline(a->maker,40);
    cout << "Height: ";
    while(!(cin >> a->height))
        clearing();
    cout << "Width: ";
    while(!(cin >> a->width))
        clearing();
    cout << "Length: ";
    while(!(cin >> a->length))
        clearing();
    cout << "Volume: ";
    while(!(cin >> a->volume))
        clearing();
    cout << "Well done!" << endl;
}
void show(const box a)
{
    cout << "\n\t\t--Your box--\n\n";
    cout << "Name: " << a.maker << endl;
    cout << "Height: " << a.height << endl;
    cout << "Width: " << a.width << endl;
    cout << "Length: " << a.length << endl;
    cout << "Volume: " << a.volume << endl;
}
//Task B
void vol(box *a)
{
    a->volume = a->height + a->length + a->width;
}

void clearing()
{
    cin.clear();
    while(cin.get() != '\n')
        continue;
     cout << "Wrong value! Please, try again!" << endl;
     cout << ": ";
}