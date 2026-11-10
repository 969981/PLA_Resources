/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841194; name: FUN_00841194
 */


void FUN_00841194(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00847388();
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  (**(code **)(**(long **)(param_1 + 0x70) + 0x20))();
  FUN_00847354(param_1);
  return;
}


