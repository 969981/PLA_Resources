/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6ae4; name: FUN_02ea6ae4
 */


void FUN_02ea6ae4(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != -1) {
    if (((param_2 + -3 < *(long **)(param_1 + 0x18)) || (param_2[-3] != lVar1)) &&
       ((*(long **)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 3 + -3 < param_2 + 3 ||
        (param_2[3] != lVar1)))) {
      FUN_02ea71cc(param_1 + 0x28);
      return;
    }
  }
  return;
}


