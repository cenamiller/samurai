// Wrapper around the trdp generated data structures to
// allow for parameter overrides

#ifndef ARGS_H
#define ARGS_H

#include <QHash>
#include <QString>

#include "Params.hh" // generated by trdp_gen
#include <unordered_set>

class Args {
  
 public:
  
  bool parseArgs(int argc, char *argv[]);
  bool paramsToHash(QHash<QString, QString> *configHash);
    
 private:
  
  QHash<QString, QString>  params_to_hash();

  Params params;
};

#endif // ARGS_H
