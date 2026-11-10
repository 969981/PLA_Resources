/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d6dd4; name: FUN_003d6dd4
 */


void FUN_003d6dd4(long *param_1)

{
  if (param_1 + 9 != (long *)*param_1) {
                    /* try { // try from 003d6dfc to 003d6e4b has its CatchHandler @ 003d6e4c */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2b,2,
                 "assertion failed: %s","head_.Load(MemoryOrder::RELAXED) == &stub_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((long *)param_1[8] != (long *)*param_1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2c,2,
                 "assertion failed: %s","tail_ == &stub_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


