/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060b748; name: FUN_0060b748
 */


undefined8 FUN_0060b748(int *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((param_2 == (undefined8 *)0x0) ||
     (lVar1 = *(long *)(param_1 + 6), (ulong)(*(long *)(param_1 + 8) - lVar1) < 8)) {
    return 0;
  }
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 2) + lVar1);
  *(long *)(param_1 + 6) = lVar1 + 8;
  uVar2 = ((uint)uVar3 & 0xff00ff00) >> 8 | ((uint)uVar3 & 0xff00ff) << 8;
  uVar4 = (uint)((ulong)uVar3 >> 0x20);
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  if (*param_1 == 0) {
    uVar3 = CONCAT44(uVar2 >> 0x10 | uVar2 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10);
  }
  *param_2 = uVar3;
  return 1;
}


