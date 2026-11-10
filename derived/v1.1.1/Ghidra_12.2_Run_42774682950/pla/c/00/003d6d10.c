/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d6d10; name: FUN_003d6d10
 */


void FUN_003d6d10(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x58) & -(*(ulong *)(param_1 + 0x58) & 1) & 0xfffffffffffffffe;
  if (4 < uVar1) {
                    /* try { // try from 003d6d34 to 003d6d43 has its CatchHandler @ 003d6dc0 */
    FUN_002f0430(uVar1,"external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x3a);
  }
  if (param_1 + 0x50 != *(long *)(param_1 + 8)) {
                    /* try { // try from 003d6d6c to 003d6dbb has its CatchHandler @ 003d6dbc */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2b,2,
                 "assertion failed: %s","head_.Load(MemoryOrder::RELAXED) == &stub_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 8)) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2c,2,
                 "assertion failed: %s","tail_ == &stub_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


