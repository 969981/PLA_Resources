/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b700; name: FUN_0060b700
 */


undefined8 FUN_0060b700(int *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 == (uint *)0x0) ||
     (lVar1 = *(long *)(param_1 + 6), (ulong)(*(long *)(param_1 + 8) - lVar1) < 4)) {
    return 0;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar1);
  *(long *)(param_1 + 6) = lVar1 + 4;
  uVar3 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (*param_1 != 0) {
    uVar3 = uVar2;
  }
  *param_2 = uVar3;
  return 1;
}


