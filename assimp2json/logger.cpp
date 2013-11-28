
#include <assimp/LogStream.hpp>
#include <assimp/Logger.hpp>

#include <assimp/DefaultLogger.hpp>
#include <stdio.h>

// Example stream
class myStream : public Assimp::LogStream
{
public:
        // Constructor
        myStream()
        {
                // empty
        }
        
        // Destructor
        ~myStream()
        {
                // empty
        }
        // Write womethink using your own functionality
        void write(const char* message)
        {
                ::printf("%s\n", message);
        }
};
