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
    cin >> a->maker;
    cout << "Height: ";
    cin >> a->height;
    cout << "Width: ";
    cin >> a->width;
    cout << "Length: ";
    cin >> a->length;
    cout << "Volume: ";
    cin >> a->volume;
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
void vol(box *a)
{
    a->volume = a->height + a->length + a->width;
}