#ifndef BASE_PREDEFINE
#define BASE_PREDEFINE


#define FOREACH_DELETE_MAP(map) \
        for (auto it = map.begin(); it != map.end(); ++it) {\
            if (it->second) {\
                delete it->second;\
            }\
        }\
        map.clear()

#define FOREACH_DELETE_LIST(list) \
        for (auto it = list.begin(); it != list.end(); ++it) {\
            if (*it) {\
                delete *it;\
            }\
        }\
        list.clear()

#define FOREACH_DELETE_VECTOR(vector) \
        for (auto it = vector.begin(); it != vector.end(); ++it) {\
            if (*it) {\
                delete *it;\
            }\
        }\
        vector.clear()

#define FOREACH_DELETE_ARRAY(array) \
        for (auto it = array.begin(); it != array.end(); ++it) {\
            if (*it) {\
                delete *it;\
            }\
        }

#define DEFINE_SINGLETON(type) \
    public:\
        static type* Create();\
        static void Destroy();\
        static type* Instance() { return s_instance; }\
    private:\
        static type* s_instance;

#define IMPLEMENT_SINGLETON(type) \
    type* type::s_instance = nullptr;\
    type* type::Create() {\
        if (s_instance == nullptr) {\
            s_instance = new type();\
        }\
        return s_instance;\
    }\
    void type::Destroy() {\
        if (s_instance != nullptr) {\
            delete s_instance;\
            s_instance = nullptr;\
        }\
    }

#define IMPLEMENT_SINGLETON_WITH_INIT(type) \
    type* type::s_instance = nullptr;\
    type* type::Create() {\
        if (s_instance == nullptr) {\
            s_instance = new type();\
            s_instance->Init(); \
        }\
        return s_instance;\
    }\
    void type::Destroy() {\
        if (s_instance != nullptr) {\
            delete s_instance;\
            s_instance = nullptr;\
        }\
    }

#endif