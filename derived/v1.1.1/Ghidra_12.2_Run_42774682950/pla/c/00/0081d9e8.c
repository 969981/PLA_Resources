/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081d9e8; name: FUN_0081d9e8
 */


void FUN_0081d9e8(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x90;
    FUN_0082481c(lVar1);
  }
  FUN_0081aac8(*(int *)(param_1 + 0x84) + param_2);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  if (lVar1 == 0) {
    return;
  }
  FUN_00824824(lVar1);
  return;
}


