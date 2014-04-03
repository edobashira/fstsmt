#include <iostream>
//#include <gzstream/gzstream.h>
#include <fst/vector-fst.h>

using namespace std;

bool CompilePhraseTable(istream* strm) {
  return true;
}

bool IsGzip(istream strm) {
  int pos = strm.tellg();
  char header[10];
  strm.read(header, 10);
  strm.seekg(pos);
  return true;
}

int main(int argc, char** argv) {
  string usage = "Compiles a phrase table into and set of FSTs and store them";
  usage += " in a finite-state archive.\n\n Usage:";
  usage += argv[0];
  usage += " [in.phrasetable.gz out.far]]\n";

  std::set_new_handler(FailedNewHandler);
  SET_FLAGS(usage.c_str(), &argc, &argv, true);
  return 0;
}
