/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e362c; name: FUN_007e362c
 */


bool FUN_007e362c(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp((void *)(param_1 + 8),&DAT_03a7160c,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp((void *)(param_1 + 0xc),&DAT_03a7160c,0xc);
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


