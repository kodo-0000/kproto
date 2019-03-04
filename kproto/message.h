
#ifndef KPROTO_MESSAGE_H_
#define KPROTO_MESSAGE_H_

namespace kproto {


    class message {
    public:

        int decode (const char *str, size_t len) = 0;


    };
}
#endif //KPROTO_MESSAGE_H_
