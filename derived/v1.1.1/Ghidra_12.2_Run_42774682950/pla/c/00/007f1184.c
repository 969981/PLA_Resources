/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f1184; name: FUN_007f1184
 */


bool FUN_007f1184(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = memcmp((void *)(param_1 + 8),&DAT_03a72091,0x10);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = memcmp((void *)(param_1 + 8),&DAT_03a720a1,8);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


