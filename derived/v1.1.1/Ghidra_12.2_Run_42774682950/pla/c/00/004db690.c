/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004db690; name: FUN_004db690
 */


undefined8 FUN_004db690(int *param_1)

{
  undefined8 uVar1;
  int local_18;
  undefined1 auStack_14 [4];
  
  if ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) != 0) &&
     (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) != 0)) {
    return 0;
  }
  uVar1 = FUN_004d88f0(param_1,auStack_14,&local_18,0);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *param_1 = local_18;
  if ((0x303 < local_18) &&
     ((*(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0)) {
    local_18 = 0x303;
  }
  param_1[0x17b] = local_18;
  return 0;
}


