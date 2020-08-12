#ifndef PLORG_H_
#define PLORG_H_
class Plorg
{
private:
    static const int MAX = 19;
    char name[MAX];
    int CI;
public:
Plorg();
Plorg(char *n, int index = 50);
void changeCI(int &index);
void show()const;
};

#endif