/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014de9d8; name: FUN_014de9d8
 */


void FUN_014de9d8(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    lVar1 = *(long *)(param_1 + 0x98) + 0x5b0;
  }
  if ((*(long *)(param_1 + 0x88) == lVar1) && (iVar2 = FUN_014dbe58(), iVar2 == 1)) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  return;
}


