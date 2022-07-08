#ifndef DESIGNPATTERNS_BUTTON_H
#define DESIGNPATTERNS_BUTTON_H

class Button{
public:
    Button() = default;
    virtual ~Button() = default;
    virtual void onClick() = 0;
};

#endif //DESIGNPATTERNS_BUTTON_H
