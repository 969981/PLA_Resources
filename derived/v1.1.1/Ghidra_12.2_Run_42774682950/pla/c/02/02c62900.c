/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62900; name: FUN_02c62900
 */


uint FUN_02c62900(long param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4);
  if (param_2 == 2) {
    uVar2 = uVar2 | (uVar1 & 4) >> 2;
  }
  else if (param_2 == 1) {
    uVar2 = uVar1 >> 2 & 1;
  }
  else if (param_2 == 0) {
    uVar2 = uVar2 & (uVar1 & 4) == 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}


