#if !defined(OO_MESSAGE_H)
#define OO_MESSAGE_H

#include <iosfwd>
#include <string>

class Message
{
private:
    std::string message;
    std::ostream &printObject(std::ostream &os);

public:
    Message(const std::string &m) : message(m){};
    ~Message(){};
    friend std::ostream &operator<<(std::ostream &os, Message &obj)
    {
        return obj.printObject(os);
    };
};

#endif // OO_MESSAGE_H
