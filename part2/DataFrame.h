#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "object.h"
#include "string.h"

// API for DataFrame
// holds an indefinite number of columns.
class DataFrame : public Object
{
    // fields
    public:

    //default constructor
    DataFrame();

    //Default destructor
    ~DataFrame();

    // print every element in the this DataFrame
    void print();

    // add an entire column into the DataFrame
    void add(Column *cc);

    // get a pointer to the column
    Column* get_col(size_t nn);

    // get the item that sits in (xx, yy)
    Object * get(size_t xx, size_t yy);

    // get the item that associates with rr and cc
    Object * get(char *rr, char *cc);

    // return the number of data rows in the DataFrame
    size_t nrow();

    // return the number of data col in the DataFrame
    size_t ncol();

};

// An abstract column
class Column : public Object
{
    // fields
    public:

    // default constructor
    Column();

    // default destructor
    ~Column();

    // add an element oo of the same type into this column
    // at position nn
    void add(size_t nn, Object *oo);

    // add an elemnt oo of the same type at the very end
    void push_back(Object *oo);

    // remove the nn'th item of this column
    // return the item removed
    Object* remove(size_t nn);

    // get a pointer to the nn'th item of this column
    Object* get(size_t nn);
    
    // set the nn'th item of this column to oo
    // return the item changed
    Object* set(size_t nn, Object *oo);
};

// A column of integers
class IntColumn : public Column
{
    // fields
    public:

    // default constructor
    IntColumn();

    // default destructor
    ~IntColumn();

    // add an integer ii into this column
    // at position nn
    void add(size_t nn, int ii);

    // add an integer ii at the very end
    void push_back(int ii);

    // remove the nn'th item of this column
    // return the item removed
    int remove(size_t nn);

    // get the nn'th item of this column
    int get(size_t nn);

    // set the nn'th item of this column to ii
    // return the item changed
    int set(size_t nn, int ii);
};

// A column of floats
class FloatColumn : public Column
{
    // fields
    public:

    // default constructor
    FloatColumn();

    // default destructor
    ~FloatColumn();

    // add a float ff into this column
    // at position nn
    void add(size_t nn, float ff);

    // add a float ff at the very end
    void push_back(float ff);

    // remove the nn'th item of this column
    // return the item removed
    float remove(size_t nn);

    // get the nn'th item of this column
    float get(size_t nn);   

    // set the nn'th item of this column to ff
    // return the item changed
    float set(size_t nn, float ff);
};

// A column of strings
class StringColumn : public Column
{
    // note: String can be either primitive char*
    // or a String-class object

    // fields
    public:

    // default constructor
    StringColumn();

    // default destructor
    ~StringColumn();

    // add a string ss into this column
    // at position nn
    void add(size_t nn, char *ss);

    // add a string ss at the very end
    void push_back(char *ss);

    // remove the nn'th item of this column
    // return the item removed
    char* remove(size_t nn);

    // get the nn'th item of this column
    char* get(size_t nn);

    // set the nn'th item of this column to ss
    // return the item changed
    char* set(size_t nn, char *ss);
};

// A column of booleans
class BoolColumn : public Column
{
    // fields
    public:

    // default constructor
    BoolColumn();

    // default destructor
    ~BoolColumn();

    // add a bool bb into this column
    // at position nn
    void add(size_t nn, bool bb);

    // add a bool bb at the very end
    void push_back(bool bb);

    // remove the nn'th item of this column
    // return the item removed
    bool remove(size_t nn);

    // get the nn'th item of this column
    bool get(size_t nn);

    // set the nn'th item of this column to bb
    // return the item changed
    bool set(size_t nn, bool bb); 
};


