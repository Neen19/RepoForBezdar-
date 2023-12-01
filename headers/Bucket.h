//
// Created by nikita on 19.11.2023.
//

#ifndef LAB3_BUCKET_H
#define LAB3_BUCKET_H

#include <string>


template<class T>
class Bucket {
public:
    Bucket() { this->setBusy(false); }

    Bucket(const std::string &key, T arg);

    int operator==(const Bucket &other);

    T getArg() const;

    void setArg(T arg);

    const std::string &getKey() const;

    void setKey(const std::string &key);

    bool getBusy() const;

    void setBusy(bool busy);

private:
    T arg;
    std::string key;
    bool busy;
};

#include "../cppFiles/Bucket.tcc"

#endif //LAB3_BUCKET_H
