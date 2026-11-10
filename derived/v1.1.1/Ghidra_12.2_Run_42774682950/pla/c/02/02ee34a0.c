/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee34a0; name: FUN_02ee34a0
 */


void FUN_02ee34a0(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_02ee2654();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = param_1;
  }
  return;
}


