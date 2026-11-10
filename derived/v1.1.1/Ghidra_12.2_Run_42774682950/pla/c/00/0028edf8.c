/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028edf8; name: FUN_0028edf8
 */


long FUN_0028edf8(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  lVar1 = 0;
  if ((uVar2 & 1) != 0) {
    lVar1 = 0xc;
  }
  if ((uVar2 & 2) != 0) {
    lVar1 = lVar1 + 0xc;
  }
  if ((uVar2 & 4) != 0) {
    lVar1 = lVar1 + 8;
  }
  return lVar1;
}


