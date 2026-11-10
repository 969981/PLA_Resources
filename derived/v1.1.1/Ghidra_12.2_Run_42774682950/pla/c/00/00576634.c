/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00576634; name: FUN_00576634
 */


void FUN_00576634(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  
  FUN_002ef750(param_1 + 0x18);
  if ((*(char *)(param_1 + 0x38) == '\0') && (*(long *)(param_1 + 0x58) != 0)) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar1 = *(long *)(param_1 + 0x58) - 1;
    if (*(ulong *)(param_1 + 0x40) >> 1 <= uVar1) {
                    /* try { // try from 00576708 to 00576727 has its CatchHandler @ 00576728 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    if ((*(ulong *)(param_1 + 0x40) & 1) == 0) {
      plVar2 = *(long **)(param_1 + 0x48 + uVar1 * 8);
    }
    else {
      plVar2 = *(long **)(*(long *)(param_1 + 0x48) + uVar1 * 8);
    }
    uVar1 = param_2;
    if (4 < param_2) {
                    /* try { // try from 005766a8 to 005766cf has its CatchHandler @ 00576728 */
      uVar1 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x76);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
  }
                    /* try { // try from 005766d0 to 005766d7 has its CatchHandler @ 00576740 */
  FUN_002ef790(param_1 + 0x18);
  if (param_2 < 5) {
    return;
  }
  FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x79);
  return;
}


