#include "ConCai.h"
class ChauChat: public ConCai
{
public:
    ChauChat();
    ~ChauChat();
    void callProtectedfromBase0()
    {
        protectedHello();
    }

};
