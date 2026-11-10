/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f40380; name: FUN_02f40380
 */


void FUN_02f40380(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    lVar1 = param_2 - *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x28) != 0) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar1;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + lVar1;
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar1;
    }
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}


