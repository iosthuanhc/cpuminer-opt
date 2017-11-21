#include "polytimos-gate.h"

bool register_polytimos_algo( algo_gate_t* gate )
{
  gate->optimizations = SSE2_OPT | AES_OPT | AVX_OPT | AVX2_OPT;
  init_polytimos_context();
  gate->scanhash  = (void*)&scanhash_polytimos;
  gate->hash      = (void*)&polytimos_hash;
  gate->get_max64 = (void*)&get_max64_0x3ffff;
  return true;
};
