/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e375c; name: FUN_007e375c
 */


undefined4 FUN_007e375c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = memcmp((void *)(param_1 + 8),&DAT_03a7160c,0x10);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    iVar1 = memcmp((void *)(param_1 + 8),&DAT_03a7160c,0x10);
    uVar2 = 6;
    if (iVar1 != 0) {
      iVar1 = memcmp((void *)(param_1 + 0xc),&DAT_03a7160c,0xc);
      uVar2 = 6;
      if (iVar1 != 0) {
        uVar2 = 0x12;
      }
      return uVar2;
    }
  }
  return uVar2;
}


