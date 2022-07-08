#ifndef DESIGNPATTERNS_INPUT_H
#define DESIGNPATTERNS_INPUT_H

class Input{
public:
    Input() = default;
    virtual ~Input() = default;
    virtual void onInput() = 0;
};

#endif //DESIGNPATTERNS_INPUT_H
