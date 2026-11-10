/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c5d0c; name: FUN_032c5d0c
 */


long FUN_032c5d0c(long param_1,uint param_2)

{
  uint uVar1;
  
  if (0 < (int)param_2) {
    uVar1 = *(int *)(param_1 + 8) + ~param_2;
    FUN_032c4fd4(param_1,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU));
  }
  return param_1;
}


