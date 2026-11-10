/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03148a7c; name: FUN_03148a7c
 */


void FUN_03148a7c(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x58);
  while (iVar1 != 0) {
    FUN_03148294(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x58);
  }
  return;
}


