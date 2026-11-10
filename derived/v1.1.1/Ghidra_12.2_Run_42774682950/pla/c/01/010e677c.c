/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e677c; name: FUN_010e677c
 */


void FUN_010e677c(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x4a8);
  if (*(byte *)(param_1 + 0x4a8) == 0x20) {
    iVar1 = FUN_010e630c();
    uVar2 = iVar1 + 0x1d;
  }
  if (uVar2 <= param_2) {
    param_2 = 0;
  }
  *(char *)(param_1 + 0x4a9) = (char)param_2;
  return;
}


