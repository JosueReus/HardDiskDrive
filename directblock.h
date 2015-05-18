#ifndef DIRECTBLOCK
#define DIRECTBLOCK



class directBlock
{
 public:
    directBlock()
    {

    }

    int block[10];
};

class SimpleIndirect
{ public:
    SimpleIndirect()
    {

    }

    directBlock blocks[10];

};

class DoubleIndirect
{ public:
    DoubleIndirect()
    {

    }

    SimpleIndirect blocks[10];

};

class TripleIndirect
{ public:
    TripleIndirect()
    {

    }

    DoubleIndirect blocks[10];

};




#endif // DIRECTBLOCK


