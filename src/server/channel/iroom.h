#ifndef ROOM_H
#define ROOM_H

#include <memory>
#include <string_view>

#include <connection/isubscriber.h>
#include <protocol.h>

class IRoom
{
public:
    virtual ~IRoom() {}

    virtual void join(subscriber_ptr) = 0;
    virtual void leave(subscriber_ptr) = 0;
    virtual void notification(text_response_ptr) = 0;

    virtual identifier_t get_room_id() const = 0;
};

using iroom_ptr = std::shared_ptr<IRoom>;

#endif // ROOM_H
