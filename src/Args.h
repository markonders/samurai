// Wrapper around the trdp generated data structures to
// allow for parameter overrides

#ifndef ARGS_H
#define ARGS_H

#include "Params.hh" // generated by trdp_gen
#include "HashMap.h"
#include <string>

class Args {
  
 public:
  
  bool parseArgs(int argc, char *argv[]);
  bool paramsToHash(HashMap *configHash);
    
 private:
  Params params;
};

#endif // ARGS_H
