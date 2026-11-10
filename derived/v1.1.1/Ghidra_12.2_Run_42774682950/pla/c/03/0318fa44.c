/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318fa44; name: FUN_0318fa44
 */


void FUN_0318fa44(long param_1,int *param_2)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x100) + (long)*param_2) | 1;
  }
  *(byte *)(*(long *)(param_1 + 0x100) + (long)*param_2) = bVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x168) + (long)*param_2 * 4) = 0xfffffffe;
  return;
}


