#ifndef THREAD_HPP
#define THREAD_HPP

#include <memory>
#include <string>
#include <thread>
#include <functional>
#include <pthread.h>
#include <sys/types.h>


namespace base 
{
    class Thread
    {



    public:
        Thread(std::function<void()> cb, const std::string name);
        ~Thread();


    private:
            Thread(const Thread &) = delete;
            Thread(const Thread &&) = delete;
    
        

    public:
        typedef std::shared_ptr<Thread> ptr;


        private:

        int m_tid;
        pthread_t m_thread;
        std::function<void()> m_cb;
        std::string m_name;

    };

}



#endif